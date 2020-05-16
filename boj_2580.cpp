#include<stdio.h>
#include<stdlib.h>

int inp[9][9];
bool row[9][10];
bool col[9][10];
bool squ[9][10];
int ze[81];
int n;
int temp;

void solve(int index){
	
	if(index==n){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				printf("%d ",inp[i][j]);
			}
			printf("\n");
		}
		exit(0);
	}
	
	int x = ze[index]/9, y = ze[index]%9;
	for(int i=1;i<10;i++){
		if(row[x][i]||col[y][i]||squ[(x/3)*3+(y/3)][i]) continue;
		row[x][i] = col[y][i] = squ[(x/3)*3+(y/3)][i] = true;
		inp[x][y]=i;
		solve(index+1);
		inp[x][y]=0;
		row[x][i] = col[y][i] = squ[(x/3)*3+(y/3)][i] = false;
	}
}

int main(void){
	
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			scanf("%d",&inp[i][j]);
			temp = inp[i][j];
			if(!temp){
				ze[n++]=i*9+j;
			}
			else{
				row[i][temp]=true;
				col[j][temp]=true;
				squ[(i/3)*3+(j/3)][temp]=true;
			}
		}
	}	
	
	solve(0);
	
	return 0;
}
