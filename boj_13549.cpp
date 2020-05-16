#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

int n,k,d[100001];
queue<int> q;

void bfs(){
	while(!q.empty()){
		int now=q.front();
		q.pop();
		if(now==k){
			cout<<d[now];
			return;
		}
		int na=now+1,nb=now-1,nc=now*2;
		if(nc<=100000&&d[nc]>d[now]+1){
			d[nc]=d[now];
			q.push(nc);
		}
		if(na<=100000&&d[na]>d[now]+1){
			d[na]=d[now]+1;
			q.push(na);
		}
		if(0<=nb&&nb<=100000&&d[nb]>d[now]){
			d[nb]=d[now]+1;
			q.push(nb);
		}
	}
}

int main(void){
	cin>>n>>k;
	q.push(n);
	memset(d,999999,sizeof(d));
	d[n]=0;
	bfs();
	return 0;
}
