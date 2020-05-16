#include<iostream>
#include<algorithm>
using namespace std;

int n,rope[100001],dp[100001],ans;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>rope[i];
	}
	sort(rope,rope+n,greater<int>());
	for(int i=0;i<n;i++){
		if(ans<rope[i]*(i+1)){
			ans=rope[i]*(i+1);
		}
	}
	cout<<ans;
	
	return 0;
}
