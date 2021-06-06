#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        long long n, k;
        cin >> n >> k;
        long long ans = 1;
        for (int i = 1; i <= k; i++){
            ans = ans * n % M;
        }
        cout << ans << endl;
    }
    return 0;
}