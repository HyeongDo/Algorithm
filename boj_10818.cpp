#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> vt;
int main(void){
	
	int n;
	scanf("%d",&n);
	int input;
	for(int i=0;i<n;i++){
		scanf("%d",&input);
		vt.push_back(input);
	}
	sort(vt.begin(),vt.end());
	
	printf("%d %d",vt[0],vt[n-1]);
	
	return 0;
}
