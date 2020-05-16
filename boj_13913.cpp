#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n,k,d[100001],p[100001];

void bfs(){
	queue<int> q;
	q.push(n);
	
	while(!q.empty()){
		int now=q.front();
		q.pop();
		
		if(now==k){
			cout<<d[now]<<'\n';
			vector<int> v;
			while(now!=n){
				v.push_back(now);
				now=p[now];
			}
			v.push_back(n);
			int m=v.size();
			for(int i=0;i<m;i++){
				cout<<v[m-i-1]<<" ";
			}
			return;
		}
		
		if(now+1<=100000&&d[now+1]==0){
			int next=now+1;
			d[next]=d[now]+1;
			p[next]=now;
			q.push(next);
		}
		if(now-1>=0&&now-1<=100000&&d[now-1]==0){
			int next=now-1;
			d[next]=d[now]+1;
			p[next]=now;
			q.push(next);
		}
		if(now*2<=100000&&d[now*2]==0){
			int next=now*2;
			d[next]=d[now]+1;
			p[next]=now;
			q.push(next);
		}
	}
}

int main(void){
	cin>>n>>k;
	bfs();
	return 0;
}
