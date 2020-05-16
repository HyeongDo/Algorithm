#include<iostream>
using namespace std;

int main(void){
	int A,B;
	cin>>A>>B;
	
	if(A>B){
		printf(">");
	}else if(A<B){
		printf("<");
	}else{
		printf("==");
	}
	
	
	return 0;
}
