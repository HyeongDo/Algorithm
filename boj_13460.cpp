#include<iostream>
#include<queue>
using namespace std;

struct bead{
	int rx,ry,bx,by,d;
};

int n,m;
char map[11][11];
bool ck[11][11][11][11];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
queue<bead> q;

void move(int &x,int &y,int &c,int dx,int dy){
	while(map[x+dx][y+dy]!='#' && map[x][y]!='O'){
		x+=dx;
		y+=dy;
		c+=1;
	}
}

void bfs(){
	while(!q.empty()){
		int rx=q.front().rx, ry=q.front().ry;
		int bx=q.front().bx, by=q.front().by;
		int d=q.front().d;
		q.pop();
		
		if(d>=10) break;
		
		for(int i=0;i<4;i++){
			int nrx=rx, nry=ry, nbx=bx, nby=by;
			int rc=0, bc=0, nd=d+1;
			
			move(nrx,nry,rc,dx[i],dy[i]);
			move(nbx,nby,bc,dx[i],dy[i]);
			
			if(map[nbx][nby]=='O') continue;
			
			if(map[nrx][nry]=='O'){
				cout<<nd;
				return;
			}
			
			if(nrx==nbx&&nry==nby){
				if(rc>bc) nrx-=dx[i], nry-=dy[i];
				else nbx-=dx[i],nby-=dy[i];
			}
			
			if(ck[nrx][nry][nbx][nby]) continue;
			
			ck[nrx][nry][nbx][nby]=true;
			q.push({nrx,nry,nbx,nby,nd});
		}
	
	}
	cout<<-1;
}

int main(void){
	cin>>n>>m;
	int rx,ry,bx,by;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
			if(map[i][j]=='R') rx=i,ry=j;
			else if(map[i][j]=='B') bx=i,by=j;
		}
	}
	
	q.push({rx,ry,bx,by,0});
	ck[rx][ry][bx][by]=true;
	bfs();
	
	return 0;
}
