#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n,k,d[100001];

void bfs(){
	queue<int> q;
	q.push(n);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		
		if(k==now){
			cout<<d[now]<<'\n;
			
			
			return;
		}
		
		if(now+1<=100000&&d[now+1]==0){
			int next=now+1;
			d[next]=d[now]+1;
			q.push(next);
		}
		if(now-1>=0&&now-1<=100000&&d[now-1]==0){
			int next=now-1;
			d[next]=d[now]+1;
			q.push(next);
		}
		if(now*2<=100000&&d[now*2]==0){
			int next=now*2;
			d[next]=d[now]+1;
			q.push(next);
		}
	}
}

int main(void){
	cin>>n>>k;
	bfs();
	return 0;
}
