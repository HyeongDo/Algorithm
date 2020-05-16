#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> vt;
int main(void){
	
	int n;

	for(int i=0;i<10;i++){
		scanf("%d",&n);
		n %= 42;
		vt.push_back(n);
	}
	
	sort(vt.begin(),vt.end());
	vt.erase(unique(vt.begin(),vt.end()),vt.end());
	
	printf("%d",vt.size());
	
	return 0;
}
