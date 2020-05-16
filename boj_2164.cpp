#include<iostream>
#include<queue>
using namespace std;

queue<int> qu;

int main(void){
	
	int N;
	scanf("%d",&N);
	
	for(int i=1;i<=N;i++){
		qu.push(i);
	}
		
	
	while(1){
		
		if(qu.size()==1){
			printf("%d",qu.front());
			break;
		}	
		
		qu.pop();
		
		int temp = qu.front();
		
		qu.pop();
		
		qu.push(temp);
		
						
		
	}
	
	
	
	return 0;
}
