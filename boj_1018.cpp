#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int n,m;
//n ���� m ���� 
string s;
char bw[51][51];
int min2=68;
int cnt;

int solve(int n,int m){
	/*
	n m ������ 
	8*8�� �ؼ� �ּҰ� ã�� -> ���
	�ּҰ� ã�� ���: �������� ������ �� ��. 
	*/
	
	for(int i=0;i<=n-8;i++){
		for(int j=0;j<=m-8;j++){
			cnt=0;
			
			for(int k=i;k<i+8;k++){
				for(int l=j;l<j+8;l++){
					if((k%2)^(l%2)){//xor �Դϴ�  �Է��� ������ 1 �ٸ��� 0 �Դϴ�. ���� ¦Ȧ,Ȧ¦ 
						if(bw[k][l]=='B') cnt++;//B�� W�� �������. �Ʒ����� 64�����ּҿ� �ּҸ� ���� ���̱� ����. 
					}
					else{//ȦȦ,¦¦�Դϴ�. 
						if(bw[k][l]=='W') cnt++;
					}
				}
			}
			
			min2 = min(min2,cnt);
			min2 = min(min2,64-cnt);
			
		}
	}
	return min2;
	
}


int main(void){
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<m;j++){
			bw[i][j]=s[j];	
		}
	}
	printf("%d",solve(n,m));
	
	return 0;
}
