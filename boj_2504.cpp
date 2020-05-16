#include<cstdio>
#include<stack>
#include<iostream>
#include<string>
using namespace std;



int main (void){
	stack<char> st;
	int number = 1;
	int sum = 0;
	string input="";
	cin>>input;
	
	for(int i=0;i<input.length();i++){
		if(input[i]=='('){
			number*=2;
			st.push('(');
			
			if(i+1<input.length()&input[i+1]==')'){
				sum+=number;
			}
			
		}else if(input[i]=='['){
			number*=3;
			st.push('[');
			
			if(i+1<input.length()&&input[i+1]==']'){
				sum+=number;
			}
		}
		
		if(!st.empty()){
			if(input[i]==')'){
				number/=2;
				
				if(st.top()=='('){
					st.pop();
				}
			}else if(input[i]==']'){
				number/=3;
				
				if(st.top()=='['){
					st.pop();
				}
			}
		}
	}
	
	if(!st.empty()){
		sum = 0;
	}
	
	cout<<sum;
	
	return 0;
}
