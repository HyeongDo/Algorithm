#include<iostream>
#include<queue>
using namespace std;

int n,k,mn=100001,ans,d[100001];
int ck[100001];
queue<int> q;

void bfs(){
	q.push(n);
	while(!q.empty()){
		int now=q.front(); q.pop();
		if(now==k&&mn>=d[now]){
			ans++;
			mn=min(mn,d[now]);
		}
		int x[]={now+1,now-1,now*2};
		for(int i=0;i<3;i++){
			int next=x[i];
			if(next<0||next>100000) continue;
			if(d[next]&&d[next]!=d[now]+1) continue;
			d[next]=d[now]+1;
			q.push(next);
		}
	}
	return;
}

int main(void){
	cin>>n>>k;
	bfs();
	cout<<mn<<'\n';
	cout<<ans;
	return 0;
}
