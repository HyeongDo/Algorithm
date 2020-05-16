#include<iostream>
#include<algorithm>
using namespace std;

int n,ans=1e9;
int s[20][20];
bool c[20];//��ŸƮ��true,��ũ��false -> i,j�� �ϳ��� üũ�ϸ� ��. 

void solve(int cnt,int index){//cnt n/2������ ���� ��, index�� n-1�����ִ�. 
	if(index==n) return;
	if(cnt==n/2){
		int s1=0,s2=0;//��ŸƮ��, ��ũ��	
		for(int i=0;i<n;i++){//�ɷ�ġ�� ���ϴ� ���� 
			for(int j=0;j<n;j++){
				//s[i][j]�ǰ���Ǽ����ϳ������غ���.
				if(c[i]&&c[j]) s1+=s[i][j]; //ij��true�� ji�� true�� s1�� ij ji �� �� 
				if(!c[i]&&!c[j]) s2+=s[i][j]; //����������. 
			}
		}
		ans = min(ans,abs(s1-s2));//ans�� s1-s2�� ������ ��
		return;
	}
	c[index]=true;
	solve(cnt+1,index+1);
	c[index]=false;
	solve(cnt,index+1);
	/*
	cnt �� �ø��� ������??
	c[index]=true�ް� c[index]=false���غ��µ�
	index�� 0~19������ ���� ���� �ϴ� ���̰�
	cnt�� ������ ���� �ǹ��Ѵ�.
	���� ������ �Ѹ��� true�� �ƴ� false�� �����ϰ� 
	true�϶��� cnt�� �ø���.(�� ���� üũ�ϱ� ����) 
	*/
}

int main(void){
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&s[i][j]);
		}
	}
	solve(0,0);
	printf("%d",ans);
	
	return 0;
}
