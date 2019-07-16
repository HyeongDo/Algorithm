#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
using namespace std;

int main(void){
	//레이저나올때마다 size만큼 더하기
	//파이프 끝부분은 +1하기 
	
	string s;
	cin>>s;
	stack<int> stack;
	int result=0;
	
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			stack.push(i);
		}
		
		if(s[i-1]=='('&&s[i]==')'){
			stack.pop();
			result+=stack.size();			
		}else if(s[i]==')'){
			stack.pop();
			result+=1;
		}
	}
	
	printf("%d",result);
	
	
	
	return 0;
}
