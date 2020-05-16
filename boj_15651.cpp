#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<int> arr;

void solve(int cnt){
	
	if(cnt==m){
		for(int i=0;i<arr.size();i++){
			printf("%d ",arr[i]+1);
		}
		printf("\n");
		return;
	}
	for(int i=0;i<n;i++){
		arr.push_back(i);
		solve(cnt+1);
		arr.pop_back();
	}
}


int main(void){
	
	scanf("%d %d",&n,&m);
	solve(0);
	
	return 0;
}
