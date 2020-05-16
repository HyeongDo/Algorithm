#include<cstdio>
#include<stack>
#include<queue>
#include<algorithm>
#include<iostream>
using namespace std;
	
	int n,temp;
	queue<int> st;
	queue<char> ans;
	stack<int> s;
	
int main(void){

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		st.push(temp);
	}
	
	int count=1;
	while(st.size()){
		
		if(s.size() && s.top()==st.front()){
			s.pop();
			st.pop();
			ans.push('-');
		}else if(count<=st.front()){
			while(count<=st.front()){
				s.push(count++);
				ans.push('+');
			}
		}else{
			printf("NO");
			return 0;
		}
	}
	while(ans.size()){
		printf("%c\n",ans.front());
		ans.pop();
	}
	
	return 0;
}
