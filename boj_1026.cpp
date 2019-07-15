#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main (void){
	
	int N;
	cin>>N;
	
	int A[N];
	int B[N];
	
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	sort(A,A+N);
	for(int i=0;i<N;i++){
		scanf("%d",&B[i]);
	}
	sort(B,B+N,greater<int>());
	int sum=0;
	for(int i=0;i<N;i++){
		sum+=A[i]*B[i];
	}
	printf("%d",sum);
	
	
	return 0;
}
