//dfs����
#include<iostream>
#include<vector>
using namespace std;

bool visit[9];
vector<int> a[10];

void dfs(int start){
	if(visit[start]){
		//�湮�� ��� return;
		return; 
	}
	
	visit[start]=true;//�湮�մϴ���
	printf("%d ",start);//�����ּ�
	
	for(int i=0;i<a[start].size();i++){
		//a[��¼��]���� �����ؼ� ����Ǿ��ִ� ������ �湮�Ѵ�.
		//�׷��� �޷��� ����������? �׷��� dfs ���� �켱Ž��!
		int x = a[start][i];
		dfs(x); 
	} 
}

int main(void){
	
	//1�� 2�� ���� 
	a[1].push_back(2);
	a[2].push_back(1);
	
	//1�� 3�� ����  
	a[1].push_back(3);
	a[3].push_back(1);
	
	//2�� 3�� ����
	a[2].push_back(3);
	a[3].push_back(2);
	
	//2�� 4�� ����
	a[2].push_back(4);
	a[4].push_back(2);
	
	//2�� 5�� ����
	a[2].push_back(5);
	a[5].push_back(2);
	
	//4�� 8�� ����
	a[4].push_back(8);
	a[8].push_back(4);
	
	//5�� 9�� ����
	a[5].push_back(9);
	a[9].push_back(5);
	
	//3�� 6�� ����
	a[3].push_back(6);
	a[6].push_back(3);
	
	//3�� 7�� ����
	a[3].push_back(7);
	a[7].push_back(3);
	
	//1�� ������ dfs Ž�� ����
	dfs(1);
	 
	return 0; 
} 
