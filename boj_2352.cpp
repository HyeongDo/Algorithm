#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,p[40001],cnt1;
vector<int> g;
vector<int>::iterator ans;//vector g�� �����ϱ� ���� �����ϻ��̴�. 

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	
	g.push_back(p[0]);
	
	for(int i=1;i<n;i++){
		if(p[i]>g[cnt1]){
			g.push_back(p[i]);//ū���̳�Ÿ����ڿ��߰� 
			cnt1++;//������ø� 
		}else{
			ans = lower_bound(g.begin(),g.end(),p[i]);//�ڸ���ã�´�.(index) 
			*ans=p[i];//������p[i]�������ִ��ڸ�����ü�Ѵ�.
//			cout<<ans[0]<<endl;
		}
	}
	
//	cout<<g[0]<<" "<<g[1]<<" "<<g[2]<<endl;
	cout<<g.size();
	
	return 0;
}
