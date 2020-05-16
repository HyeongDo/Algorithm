#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

vector<pair<int,int> > vt;

int main(void){
	
	int n;
	cin>> n;
	
	for(int i=0;i<n;i++){
		int temp;
		cin>> temp;
		vt.push_back(pair<int,int>(temp,i));
	}
	
	sort(vt.begin(),vt.end());
	
	
	
	return 0;
}
