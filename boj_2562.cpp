#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, int> > vt;
int main(void){
	
	int n;
	for(int i=0;i<9;i++){
		scanf("%d",&n);
		vt.push_back(make_pair(n,i+1));
	}
	sort(vt.begin(),vt.end());
	
	printf("%d\n",vt[8].first);
	printf("%d",vt[8].second);
	
	return 0;
}
