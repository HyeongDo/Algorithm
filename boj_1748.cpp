//3자리수면 3을 계속 더한다
//그러면서 -1씩

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
