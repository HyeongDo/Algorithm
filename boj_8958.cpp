#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> vt;
int main(void){
	
	int number;
	cin>>number;
	
	
	for(int j=0;j<number;j++){
		string input;
		cin>>input;
		int count = 0;
		int sum = 0;
		for(int i=0;i<input.size();i++){
			if(input[i]=='O'){
				count++;
			}else{
				count = 0;
			}
			sum += count;
		}
		printf("%d\n",sum);
	}
	
	//o�� ������ count++
	//count �迭 ���� 
	//x�� ������ count�迭 ���� ��ȣ�� ����
	
	return 0;
}
