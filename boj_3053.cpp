#include<iostream>
#include<algorithm>
#define USE_MATH_DEFINES
#include<math.h>
using namespace std;
int inp;
double root;
int main(void){
	
	scanf("%d",&inp);
	printf("%f\n",M_PI*inp*inp);
	root=sqrt(inp*inp+inp*inp);
	printf("%f",root*root);
	return 0;
}
