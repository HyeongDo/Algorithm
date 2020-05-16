#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
 
using namespace std;
int n,cnt;
int a[1000001];
vector <int> ans ;
int main() {
    cin >> n;
    ans.push_back(-1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int big = a[i];
        if (ans.back() < a[i])
        {
            ans.push_back(a[i]);
            cnt++;
        }
        else
        {
            auto it = lower_bound(ans.begin(), ans.end(), a[i]);
            *it = big;
        }
    }
    cout << cnt << '\n';
 
}

