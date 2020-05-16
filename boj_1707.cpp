#include<iostream>
#include<vector>
using namespace std;

int t,v,e;
vector<int> vec[20001];
int chk[20001];

bool dfs(int now,int group){
	chk[now]=group;
	for(int i=0;i<vec[now].size();i++){
		int next = vec[now][i];
		if(chk[next]==0){
			if(!dfs(next,-group)){
				return false;
			}
		}else if(chk[now]==chk[next]){
			return false;
		}
	}
	return true;
}

int main(void){
	cin>>t;
	int x,y;
	while(t--){
		cin>>v>>e;
		for(int i=1;i<=v;i++){
			vec[i].clear();//ÃÊ±âÈ­ 
			chk[i]=0;
		}
		for(int i=0;i<e;i++){
			cin>>x>>y;
			vec[x].push_back(y);
			vec[y].push_back(x);
		}
		bool ans=true;
		for(int i=1;i<=v;i++){
			if(chk[i]==0){
				if(!dfs(i,1)){
					ans=false;
					break;
				}
			}
		}
		if(ans==true){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}
