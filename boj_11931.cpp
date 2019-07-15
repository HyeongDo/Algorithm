#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

string word[20001];


bool compare(string a, string b){
	
	//사이즈가 다르면 사이즈 순서대로---1 
	if(a.size()!=b.size()){
		return a.size()<b.size();
	}
	
	//이름이 다르면 이름 순서대로---2
	return a<b;
}

int main(void){
	
	int N;
	cin>>N;

	for(int i=0;i<N;i++){
		cin>>word[i];
	}
	
	sort(word,word+N,compare);
	
	//중복일경우 
	string overlap;
	for(int i=0;i<N;i++){
		overlap=word[i];
		if(overlap!=word[i+1]){
			cout<<word[i]<<"\n";
		}	
	}
	
	return 0;
}
