//bfs 연습
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

bool visit[9];
vector<int> a[10];

void bfs(int start){
	queue<int> q;
	q.push(start);
	visit[start] = true;
	
	//참고해야할 것이 bfs는 재귀가 아니라 큐를 이용한다.
	//cf. dfs는 스택이나 재귀를 이용한다. 
	while(!q.empty()){
		//큐에 값이 있을 경우만 반복문을 실행한다.
		//큐에 값이 있다는 것은 아직 방문하지 않은 노드가 존재한다는 것이다.
		int x = q.front();//맨앞에 것을 저장 
		q.pop();//뺀다. 
		printf("%d ",x); //맨앞에 것을 출력
		for(int i=0;i<a[x].size();i++){//a[어쩌구]랑 연결된 것들에 대해서 탐색하는데 크기만큼만 한다.
			int y = a[x][i];//a[어쩌구]에 연결된 것들 중 안 들어간 것에 대해 탐색한다. 
			if(!visit[y]){
				//방문하지 않았다면...
				q.push(y);
				visit[y]=true;
			} 
			 
			
		} 
		
	}
}

int main(void){
	
	//1과 2를 연결
	a[1].push_back(2);
	a[2].push_back(1);
	
	//1과 3을 연결
	a[1].push_back(3);
	a[3].push_back(1);
	
	//2와 4를 연결
	a[2].push_back(4);
	a[4].push_back(2);
	
	//2와 5를 연결
	a[2].push_back(5);
	a[5].push_back(2);
	
	//4와 8을 연결
	a[4].push_back(8);
	a[8].push_back(4);
	
	//5와 9를 연결
	a[5].push_back(9);
	a[9].push_back(5);
	
	//3과 6을 연결
	a[3].push_back(6);
	a[6].push_back(3);
	
	//3과 7을 연결
	a[3].push_back(7);
	a[7].push_back(3);
	
	//1번 노드부터 bfs 탐색 실행
	 bfs(1);
	
	return 0;
}
