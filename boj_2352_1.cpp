#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,p[40001],cnt;
vector<int> g;
vector<int>::iterator ans;

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	g.push_back(p[0]);//첫 비교대상 
	for(int i=1;i<n;i++){
		if(p[i]>g[cnt]){
			g.push_back(p[i]);
			cnt++;//하나가 들어갔으니 뒤에도 들어가게 g vector의 크기를 늘림 
		}
		else{
			ans=lower_bound(g.begin(),g.end(),p[i]);//index를 가져옴 
			*ans=p[i];//그 index에 값을 넣음 
		}
	}
	cout<<g.size();
	return 0;
}
