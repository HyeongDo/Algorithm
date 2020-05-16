#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<int> arr;

void solve(int index, int cnt){
	if(cnt==m){
		for(int i=0;i<m;i++){
			printf("%d ",arr[i]+1);
		}
		printf("\n");
		return;
	}
	
	for(int i=index;i<n;i++){
	/*
	ÀÌÀü¿¡ »Ì¾Ò´ø ½ÃÀÛÁöÁ¡ºÎÅÍ ½ÃÀÛÇÑ´Ù. n=3,m=3ÀÏ¶§, 
	1)index=0ÀÏ¶§, i=0, arr[0]=0, ++solve(0,0+1)
	2)++index=0ÀÏ¶§, i=0, arr[1]=0, +++solve(0,1+1)
	3)+++index=0ÀÏ¶§, i=0, arr[2]=0, ++++solve(0,2+1)
	->cnt==m  1,1,1 »ÌÀ½retuen
	arr.pop_back()->arr[2]¾ø¾îÁü, i=1, arr[2]=1, +++++solve(1,2+1)
	->cnt==m 1,1,2 »ÌÀ½ return
	arr.pop_back()->arr[2]¾ø¾îÁü, i=2, arr[2]=2, +++++solve(2,2+1)
	->cnt==m 1,1,3 »ÌÀ½ return
	arr.pop_back()->arr[2]¾ø¾îÁü, i=3¾ÈµÊ return 
	2)arr.pop_back()->arr[1]¾ø¾îÁü, i=1, arr[1]=1, ++++solve(1,1+1)
	i=1, arr[2]=1, +++++solve(1,2+1)
	->cnt==m 1,2,2 return
	arr.pop_back()->arr[2]¾ø¾îÁü, i=2, arr[2]=2, +++++solve(1,2+1) 
	->cnt==m 1,2,3 return
	arr.pop_back()->arr[2]¾ø¾îÁü, i=3¾ÈµÊ return
	2)arr.pop_back()->arr[1]¾ø¾îÁü, i=2, arr[1]=2, ++++solve(2,1+1)
	i=2, arr[2]=2, +++++solve(3,2+1)
	->cnt==m 1,3,3 return
	->2)µµ return 
	*/ 
		arr.push_back(i);
		solve(i,cnt+1);
		arr.pop_back();		
	}
} 


int main(void){
	
	scanf("%d %d",&n,&m);
	solve(0,0);	
	return 0;
}
