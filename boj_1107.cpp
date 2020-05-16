/*
+ -> 1
- -> -1
0���� -������ ä���� ������ ����
ä���� ���Ѵ�
n���� �̵��ϱ� ���� ��ư�� �ּ� ��� �������ϴ��� ���ϴ� ��
���� ��ġ�� 100 
1. �̵��Ϸ��� ��ȣ�� ���� �� ������ �ѹ��� ����.
2. ��ȣ�� ������ ���
2-1. ������ ��ȣ�� ����. -> + �Ǵ� -�� �Ѵ�. 
2-2. �ٷ� +�Ǵ� -�� �Ѵ�. 

=>100�� ����� ���������� ����ش�.

1. n�� ������
2. false�� 0~9������ ���� �����.
=> ã�� �� �ڸ��� ��ư ����
==> ������ ���� ã���鼭 0~9�߿� ������ �� �߿��� ���� ����� ���� ã�´�.
 
+

1. �� ������ n���� ��ư ����
 
511111(6����ư)+11111��(-��ư 1��) = 111117�� 
*/

#include<iostream>
using namespace std;

int n,m,su=100,mn;
bool btn[11];

int ck(int num){
	if(num==0){
		if(btn[num]==true){
			return 0;
		}else{
			return 1;
		}
	}
	int numSize=0;
	while(num>0){
		if(btn[num%10]==true) return 0;
		numSize++;
		num/=10;	
	}
	return numSize;
} 

int main(void){
	cin>>n>>m;
	int tmp;
	for(int i=0;i<m;i++){
		cin>>tmp;
		btn[tmp]=true;//�ȵǴ� ä���� true 
	}
	
	int ans = n-100;
	if(ans<0) ans=-ans;
	
	for(int i=0;i<=1000000;i++){
		int numSize=ck(i);
		if(numSize>0){
			int btnAble=i-n;
			if(btnAble<0) btnAble=-btnAble;
			if(ans>numSize+btnAble) ans=numSize+btnAble;
		}
	}
	cout<<ans;
	
	return 0;
}
