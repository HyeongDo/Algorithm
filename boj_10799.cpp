#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
using namespace std;

int main(void){
	//���������ö����� size��ŭ ���ϱ�
	//������ ���κ��� +1�ϱ� 
	
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
