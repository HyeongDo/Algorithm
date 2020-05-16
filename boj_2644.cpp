#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int n,chon1,chon2,m,temp1,temp2,dist[101];
vector<int> v[101];
queue<int> q;

int bfs(int chon1,int chon2){
	q.push(chon1);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		if(now==chon2){
			return dist[now];
		}
		for(int i=0;i<v[now].size();i++){
			int next=v[now][i];
			if(dist[next]) continue;
			dist[next]=dist[now]+1;
			q.push(next);
		}
	}
	return -1;
}

int main(void){
	cin>>n;
	cin>>chon1>>chon2;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>temp1>>temp2;
		v[temp1].push_back(temp2);
		v[temp2].push_back(temp1);
	}
	cout<<bfs(chon1,chon2);
	return 0;
}

