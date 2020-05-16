#include<iostream>
#include<stack>
using namespace std;


stack<int> st;
int main (void){
	
	int K;
	scanf("%d",&K);
	int sum = 0;
	
	for(int i=0;i<K;i++){
		int n;
		scanf("%d",&n);
		
		if(n==0){
			st.pop();
		}else{
			st.push(n);
		}
		
	}
	
	int temp = st.size();
	
	for(int i=0;i<temp;i++){
		sum += st.top();
		st.pop();
	}
	
	
	printf("%d",sum);
	
	
	return 0;
}
