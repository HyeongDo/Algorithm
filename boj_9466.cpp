#include<iostream>
#include<string.h>
using namespace std;

int t,n,x,cnt,vis;
bool chk[100001];
bool done[100001];
int v[100001];

void dfs(int x){
	chk[x]=true;
	int next=v[x];
	if(!chk[next]){
		dfs(next);
	}
	else if(!done[next]){
		for(int i=next;i!=x;i=v[i]){
			cnt++;
		}
		cnt++;
	}
	done[x]=true;
}

int main(void){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>v[i];
		}
		for(int i=1;i<=n;i++){
			if(!chk[i]){
				dfs(i);
			}
		}
		cout<<n-cnt<<endl;
		memset(chk,false,sizeof(chk));
		memset(done,false,sizeof(chk));
		cnt=0;
	}
	return 0;
}
