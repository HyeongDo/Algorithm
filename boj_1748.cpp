//3�ڸ����� 3�� ��� ���Ѵ�
//�׷��鼭 -1��

 #include<iostream>
 using namespace std;
 
 int n,ans;
 
 int ck(int num){
 	int tmp=0,c=0;
 	while(num){
 		tmp=num%10;
 		num/=10;
 		c++;
	 }
//	 cout<<c<<endl;
	 return c;
 }
 
 int main(void){
 	cin>>n;
 	while(n){
 		ans+=ck(n);
 		n--;
	 }
 	cout<<ans;
 	return 0;
 }
