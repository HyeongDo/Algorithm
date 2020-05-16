#include<iostream>
#include<vector>
using namespace std;

int n,d[1001],v[1001],mx;
vector<int> a;

int main(void){
	cin>>n;
	int tmp;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		d[i]=1;
		for(int j=0;j<=i;j++){
			if(v[i]>v[j]&&d[i]<d[j]+1){
				d[i]=d[j]+1;
			}
		}
		if(mx<d[i]){
			mx=d[i];
			a.push_back(v[i]);
		}
	}
	cout<<mx<<endl;
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}

	return 0;
}
