#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n;
vector<int> a;

int main(void){
	cin>>n;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}

	for(int i=0;i<n;i++){
		auto it = lower_bound(a.begin(),a.end(),i);
		list[it];
	}
	
	return 0;
}
