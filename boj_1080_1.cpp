#include<iostream>
using namespace std;

int  n,m,cnt;
char nm[51][51],out[51][51];

int main(void){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>nm[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>out[i][j];
		}
	}
	/*
	 
	같으면 변경하지 않는다.
	다를시에 3x3 행렬 변경
	 
	*/
	for(int i=0;i<n-2;i++){
		for(int j=0;j<m-2;j++){
			if(nm[i][j]==out[i][j]) continue; 
			cnt++;
			for(int x=i;x<i+3;x++){
				for(int y=j;y<j+3;y++){
					if(nm[x][y]=='0') nm[x][y]='1';
					else nm[x][y]='0';
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(nm[i][j]!=out[i][j]){
				cout<<"-1";
				return 0;
			}
		}
	}
	cout<<cnt;
	return 0;
}
