#include<iostream>
#include<queue>
using namespace std;

bool visited[10];
int num,map[10][10];
queue<int> q;

void bfs(int v){
	cout<<v<<" ";
	q.push(v);
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(int i=0;i<=num;i++){
			if(map[node][i]&&!visited[i]){
				visited[node]=1;
				cout<<i<<" ";
				q.push(i);
			}
		}
	}	
}

int main(void){
	cin>>num;
	int v,u;
	while(cin>>v>>u&&v!=-1&&u!=-1){
		map[v][u]=map[u][v]=1;
	}
	bfs(1);
	return 0;
}
