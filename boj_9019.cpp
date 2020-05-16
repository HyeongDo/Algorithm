#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;

int t,a,b;
const int N=10000, M=1000;
bool ck[N+1];
char C[]="DSLR";
int p[N+1],co[N+1];

void bfs(){
	queue<int> q;
	q.push(a);
	
	while(!q.empty()){
		int now=q.front();
		q.pop();
		if(now==b){
			vector<char> v;
			int mx=now;
			while(mx!=a){
				v.push_back(co[mx]);
				mx=p[mx];
			}
			int m=v.size();
			for(int i=0;i<m;i++){
				printf("%c",v[m-i-1]);
			}
			cout<<'\n';
			return;
		}
		
		int nx[]={now*2%N,now-1,now%M*10+now/M,now/10+now%10*M};
		if(nx[1]<0) nx[1]=N-1;
		for(int i=0;i<4;i++){
			if(ck[nx[i]]) continue;
			ck[nx[i]]=true;
			p[nx[i]]=now;
			co[nx[i]]=C[i];
			q.push(nx[i]);
		}
		
	}
	
}


int main(void){
	cin>>t;
	while(t--){
		cin>>a>>b;
		memset(ck,false,sizeof(ck));
		bfs();
	}
	
	return 0;
}
