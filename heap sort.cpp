#include <stdio.h>

int main (void){
	
	int number=9;
	int heap[number]={8,5,7,6,4,3,2,4,2};
	
	
	
	// �� ���� ���� 
	for(int i=1;i<number;i++){
		int c =i;
		do{
			//�θ�� �ö� 
			int root = (c-1)/2;
			//�θ𺸴� ������ ���� 
			if(heap[root]<heap[c]){
				int temp = heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			//�θ�� �ö󰡱� ���� 
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
			//�ڽ����� ������ 
			c=2*root+1;
			
			//�ڽ��߿� ū ���� ã�� 
			if(c<i-1&&heap[c]<heap[c+1]){
				c++;
			}
			
			// ��Ʈ���� �ڽ��� ũ�� ��ȯ�Ѵ� 
			if(c<i&&heap[root]<heap[c]){
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
				
			}
			
			//�ڽ����� �������� ���� 
			root=c;
			
		}while(c<i);
		
	}//�� �����ϱ� 
	
	//�� ���Դ��� ����غ���
	for(int i=0;i<number;i++){
		printf("%d ",heap[i]);
	} 
	
	
	
	return 0;
}
