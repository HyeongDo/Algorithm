#include<iostream>
#include<string.h>
using namespace std;

int m,n;
bool state[21];
string st;

int main(void){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>m;
	while(m--){
		cin>>st;
		if(st=="all"||st=="empty"){
			if(st=="all"){
				for(int i=1;i<=20;i++){
					state[i]=true;
				}
			}else if(st=="empty"){
				memset(state,false,sizeof(state));
			}
		}else{
			cin>>n;
			if(st=="add"){
				if(state[n]==false) state[n]=true;
			}else if(st=="remove"){
				if(state[n]==true) state[n]=false;
			}else if(st=="check"){
				if(state[n]==true){
					cout<<1<<"\n";
				}else{
					cout<<0<<"\n";
				}
			}else if(st=="toggle"){
				if(state[n]==true) state[n]=false;
				else state[n]=true;
			}
		}
	}	
	return 0;
}
