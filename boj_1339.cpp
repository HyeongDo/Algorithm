#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,mx;
string tmp;
vector<int> v(26);

int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		reverse(tmp.begin(),tmp.end());
		int ten=1;
		for(int j=0;j<tmp.size();j++){
			v[tmp[j]-'A']+=ten;
			ten*=10;
		}
	}
	
	sort(v.begin(),v.end(),greater<int>());
	int ans=0;
	int num=9;
	for(int i=0;i<v.size();i++){
		ans+=v[i]*num;
		num--;
	}
	cout<<ans;
	return 0;
}
