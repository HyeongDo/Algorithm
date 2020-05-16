#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool check(vector<int>& perm,vector<char>& arr){
	for(int i=0;i<arr.size();i++){
		if(arr[i]=='<'&&perm[i]>perm[i+1]) return false;
		if(arr[i]=='>'&&perm[i]<perm[i+1]) return false;
	}
	return true;
}

int main(void){
	int k;
	cin>>k;
	vector<char> arr(k);
	for(int i=0;i<k;i++){
		cin>>arr[i];
	}
	vector<int> small(k+1);
	vector<int> big(k+1);
	for(int i=0;i<=k;i++){
		small[i]=i;
		big[i]=9-i;
	}
	do{
		if(check(big,arr)){
			for(int i=0;i<big.size();i++){
				cout<<big[i];
			}
			cout<<endl;
			break;
		}
	}while(prev_permutation(big.begin(),big.end()));
	do{
		if(check(small,arr)){
			for(int i=0;i<small.size();i++){
				cout<<small[i];
			}
			break;
		}
	}while(next_permutation(small.begin(),small.end()));
	
	return 0;
}
