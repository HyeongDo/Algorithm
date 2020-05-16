#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

//s->g·Î °¡¾ßÇÔ ÃÑ fÃþ, À§·Î uÃþ, ¾Æ·¡·Î dÃþ 
int f,s,g,u,d,dx[1000001];
queue<int> q;

void bfs(){
	while(!q.empty()){
		int now=q.front();
		q.pop();
		if(now==g){
			cout<<dx[now]-1;
			return;
		}
		int nx[]={now+u,now-d};
		for(int i=0;i<2;i++){
			int next=nx[i];
			if(next<1||next>f) continue;
			if(dx[next]>0) continue;
			dx[next]=dx[now]+1;
//			cout<<dx[next]<<endl;
			q.push(next);
		}
	}
	cout<<"use the stairs";
	return;
}

int main(void){
	cin>>f>>s>>g>>u>>d;
	q.push(s);
	dx[s]=1;
	bfs();
	return 0;
}
