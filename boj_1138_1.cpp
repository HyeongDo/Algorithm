#include <cstdio>
#include <vector>
using namespace std;

int n, a[12];
vector<int> v;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    v.push_back(n);
    for (int i = n-1; i >= 1; i--) {
        v.insert(v.begin()+a[i], i);
    }
    for (int it=0;it<v.size();it++) {
        printf("%d ", v[it]);
    }
    
    return 0;
}
