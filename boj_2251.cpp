#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int a,b,c;
bool ck[201][201];
vector<int> v;

struct bottle{
	int x,y;
};

queue<bottle> q;

void pour(int x,int y){
	if(ck[x][y]==false){
		ck[x][y]=true;
		q.push({x,y});
	}
}

void bfs(){
	q.push({0,0});
	ck[0][0]=true;
	while(!q.empty()){
		int x=q.front().x, y=q.front().y, z=c-x-y; q.pop();
		
		if(!x) v.push_back(z);
		
		int water=min(x,b-y);
		pour(x-water,y+water);
		
		water=min(x,c-z);
		pour(x-water,y);
		
		water=min(y,a-x);
		pour(x+water,y-water);
		
		water=min(y,c-z);
		pour(x,y-water);
		
		water=min(z,a-x);
		pour(x+water,y);
		
		water=min(z,b-y);
		pour(x,y+water);
		
	}
	
}

int main(void){
	cin>>a>>b>>c;
	bfs();
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}
