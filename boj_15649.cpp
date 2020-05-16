#include<stdio.h>

int n,m;
int arr[10];
bool visit[10];
/*
숫자는 n까지의 자연수까지 선택할 수 있다.
하지만, m개의 숫자만 뽑을 수 있다.

1.한줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.
2.중복되는 수열을 여러 번 출력하면 안 되며, 
3.각 수열은 공백으로 구분해서 출력한다.
4.수열은 사전 순으로 증가하는 순서로 출력한다.
 
 정리 : n까지의 숫자중에 m개를 뽑는데, 중복되지 않는 수여야 하고 증가하는 순서대로 뽑는다. 
 고안한 방법 : 재귀이용, m개가 되면 출력하는 것 반복, 같은 것이나 했던 것 출력하지 않게
 방문체크 visit[8]->bool 초기 false, 방문했으면 true로 변경 
*/
void solve(int cnt){
	
	if(cnt==m){
		for(int i=0;i<m;i++){//cnt==m이면 m개 완성된 것이므로 출력. 그 후 다시 그전 solve로 돌아감 
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	
	for(int i=1;i<=n;i++){
		if(!visit[i]){//백트래킹 
			visit[i]=true;
			arr[cnt]=i;
			solve(cnt+1);
			visit[i]=false;
		}
	}
}

int main(void){
	
	scanf("%d %d",&n,&m);
	solve(0);
	
	return 0;
}
