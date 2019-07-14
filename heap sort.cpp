#include <stdio.h>

int main (void){
	
	int number=9;
	int heap[number]={8,5,7,6,4,3,2,4,2};
	
	
	
	// 힙 구조 생성 
	for(int i=1;i<number;i++){
		int c =i;
		do{
			//부모로 올라감 
			int root = (c-1)/2;
			//부모보다 작으면 변경 
			if(heap[root]<heap[c]){
				int temp = heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			//부모로 올라가기 위함 
			c=root;
			
		}while(c!=0);
		
	}
	
	for(int i=number-1;i>=0;i--){
		int temp=heap[0];
		heap[0]=heap[i];
		heap[i]=temp;
		
		int root=0;
		int c=1;
		
		do{
			//자식으로 내려감 
			c=2*root+1;
			
			//자식중에 큰 값을 찾기 
			if(c<i-1&&heap[c]<heap[c+1]){
				c++;
			}
			
			// 루트보다 자식이 크면 교환한다 
			if(c<i&&heap[root]<heap[c]){
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
				
			}
			
			//자식으로 내려가기 위함 
			root=c;
			
		}while(c<i);
		
	}//힙 구성하기 
	
	//잘 나왔는지 출력해보기
	for(int i=0;i<number;i++){
		printf("%d ",heap[i]);
	} 
	
	
	
	return 0;
}
