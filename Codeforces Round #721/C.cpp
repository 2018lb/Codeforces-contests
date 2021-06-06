#include <bits/stdc++.h>
using namespace std;
 
map<int,long long>q;
 
 
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        q.clear();
 
        long long ans = 0;
 
        for (int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if (!q[x]) {
                q[x] += i;
                continue;
            }
            ans += q[x] * (n-i+1);
            q[x] += i;
        }
 
        cout << ans << endl;
    }
 
}