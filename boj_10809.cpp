#include<iostream>
#include<string>
using namespace std;

string a;
char arr[101];
int alp[101];
bool check[101];
int main(void){
	
	cin>>a;
	//a~z���� 26��
	//���ĺ� ������� for�� 
	//string�� �ִ� �͵� numbering �ؾ���
	//���ĺ��ִ°͵鸸 check
	//int�� �ٲ㼭? 
	//��65 ��97 
	
	int k = 1;
	for(int i=0;i<a.size();i++){
		
		if(check[a[i]-97]==false){
			alp[a[i]-97] = k++;
			check[a[i]-97] = true;
		}else{
			k++;
		}
	}
	
	for(int j=0;j<26;j++){
		
		
		if(alp[j]==0){
			printf("-1 ");
		}else{
			printf("%d ",alp[j]-1);	
		}
	}
	
	
	
	return 0;
}
