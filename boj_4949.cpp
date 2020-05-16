#include<iostream>
#include<stack>
#include<string>
using namespace std;

string temp;
int main (void){
	
	
	while(1){
		
		getline(cin,temp);
		
		if(temp == "."){
			break;
		}
				
		stack<char> st;	
		int len = temp.length();
		
		for(int i=0;i<len;i++){
			
			
			
			if(temp[i] == '('){
				st.push('(');
			}else if(temp[i]==')'){
				if(st.top()=='('){
					st.pop();
				}
			}else if(temp[i]=='['){
				st.push('[');
			}else if(temp[i]==']'){
				if(st.top()=='['){
					st.pop();
				}
			}
			
		}
		
		if(st.empty()){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}
		
				
	}
	
	return 0;
}
