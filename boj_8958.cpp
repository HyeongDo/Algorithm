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
	
	//o가 나오면 count++
	//count 배열 생성 
	//x가 나오면 count배열 다음 번호로 변경
	
	return 0;
}
