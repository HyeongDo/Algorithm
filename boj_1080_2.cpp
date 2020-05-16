#include<iostream>
using namespace std;

int n,m,cnt;
char map[51][51],out[51][51];

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>out[i][j];		
		}
	}
	
	for(int i=0;i<n-2;i++){
		for(int j=0;j<m-2;j++){
			if(map[i][j]==out[i][j]) continue;
			for(int ii=i;ii<i+3;ii++){
				for(int jj=j;jj<j+3;jj++){
					if(map[ii][jj]=='0') map[ii][jj]='1';
					else if(map[ii][jj]=='1') map[ii][jj]='0';
				}
			}
			cnt++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]!=out[i][j]){
				cout<<-1;
				return 0;
			}	
		}
	}
	cout<<cnt;
	return 0;
}
