#include<iostream>
#include<queue>
using namespace std;

int n,k,d[100001];
queue<int> q;

void bfs(){
	while(!q.empty()){
		int now=q.front();
		if(now==k){
			cout<<d[now];
			return;
		}
		q.pop();
		int a=now+1,b=now-1,c=now*2;
		if(a<=100000&&d[a]==0){
			d[a]=d[now]+1;
			q.push(a);
		}
		if(b>=0&&b<=100000&&d[b]==0){
			d[b]=d[now]+1;
			q.push(b);
		}
		if(c<=100000&&d[c]==0){
			d[c]=d[now]+1;
			q.push(c);
		}
	}
}

int main(void){
	cin>>n>>k;
	q.push(n);
	bfs();
	return 0;
}
