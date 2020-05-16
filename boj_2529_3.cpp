#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int k;
char inp[10];
vector<int> big;
vector<int> small;

bool chk(vector<int>&perm,char arr[]){
	for(int i=0;i<k;i++){
		if(arr[i]=='<'&&perm[i]>perm[i+1]) return false;
		if(arr[i]=='>'&&perm[i]<perm[i+1]) return false;
	}
	return true;
}

int main(void){
	cin>>k;
	big.resize(k+1);
	small.resize(k+1);
	for(int i=0;i<k;i++){
		cin>>inp[i];
	}
	for(int i=0;i<=k;i++){
		small[i]=i;
		big[i]=9-i;
	}
	
	do{
		if(chk(big,inp)){
			for(int i=0;i<big.size();i++){
				cout<<big[i];
			}
			cout<<endl;
			break;
		}
	}while(prev_permutation(big.begin(),big.end()));
	
	do{
		if(chk(small,inp)){
			for(int i=0;i<small.size();i++){
				cout<<small[i];
			}
			break;
		}
	}while(next_permutation(small.begin(),small.end()));
	
	return 0;
}
