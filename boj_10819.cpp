#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int n,MAX=-1,sum,tmp;
vector<int> v;

int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&tmp);
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	do{
		for(int i=0;i<n-1;i++){
			sum+=abs(v[i]-v[i+1]);
		}
		MAX = MAX < sum ? sum : MAX;
		sum=0;
	}while(next_permutation(v.begin(),v.end()));
	
	printf("%d",MAX);
	return 0;
}
