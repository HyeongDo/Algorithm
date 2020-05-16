#include<stdio.h>

//케이스 수 
int input;
//케이스 안에 학생들 수 
int arr[1001];
//각 케이스마다 학생들 점수 
double st[1001];
//각 케이스마다 학생들 max 점수 
double max[1001];
//각 케이스마다 학생들 점수 합
double sum[1001];
//각 케이스 평균
double avg[1001];
//갯수
int count[1001];

int main(void){
	scanf("%d",&input);
	
	for(int i=0;i<input;i++){
		scanf("%d",&arr[i]);
		for(int j=0;j<arr[i];j++){
			scanf("%lf",&st[j]);
			if(st[j] >= max[i]){
				max[i] = st[j];
			}
			sum[i] += st[j];
		}
		avg[i] = sum[i]/(double)arr[i];
		
		for(int m=0;m<arr[i];m++){
			if(st[m] > avg[i]){
				count[i]++;
			}
		}
		printf("%.3f%%\n",(double)count[i]*100/(double)arr[i]);
	}

	
	return 0;
}
