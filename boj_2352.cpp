#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,p[40001],cnt1;
vector<int> g;
vector<int>::iterator ans;//vector g에 삽입하기 위한 도구일뿐이다. 

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	
	g.push_back(p[0]);
	
	for(int i=1;i<n;i++){
		if(p[i]>g[cnt1]){
			g.push_back(p[i]);//큰것이나타나면뒤에추가 
			cnt1++;//사이즈도늘림 
		}else{
			ans = lower_bound(g.begin(),g.end(),p[i]);//자리를찾는다.(index) 
			*ans=p[i];//작으면p[i]가들어갈수있는자리에교체한다.
//			cout<<ans[0]<<endl;
		}
	}
	
//	cout<<g[0]<<" "<<g[1]<<" "<<g[2]<<endl;
	cout<<g.size();
	
	return 0;
}
