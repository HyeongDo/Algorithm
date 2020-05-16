//dfs연습
#include<iostream>
#include<vector>
using namespace std;

bool visit[9];
vector<int> a[10];

void dfs(int start){
	if(visit[start]){
		//방문한 경우 return;
		return; 
	}
	
	visit[start]=true;//방문합니다잉
	printf("%d ",start);//시작주소
	
	for(int i=0;i<a[start].size();i++){
		//a[어쩌구]에서 시작해서 연결되어있는 노드들을 방문한다.
		//그러면 쭈루루룩 내려가겠죠? 그래서 dfs 깊이 우선탐색!
		int x = a[start][i];
		dfs(x); 
	} 
}

int main(void){
	
	//1과 2를 연결 
	a[1].push_back(2);
	a[2].push_back(1);
	
	//1과 3을 연결  
	a[1].push_back(3);
	a[3].push_back(1);
	
	//2와 3을 연결
	a[2].push_back(3);
	a[3].push_back(2);
	
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
	
	//1번 노드부터 dfs 탐색 실행
	dfs(1);
	 
	return 0; 
} 
