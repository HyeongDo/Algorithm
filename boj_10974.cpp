#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<int> v;

int main(void){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		v.push_back(i);
	}
	
	do{
		for(int i=0;i<v.size();i++){
			printf("%d ",v[i]);
		}
		printf("\n");
	}while(next_permutation(v.begin(),v.end()));
	
	return 0;
}
