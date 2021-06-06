#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        long long a, b, k;
        cin >> a >> b >> k;
        if (a < b) swap(a, b);
        if (b*(k+1) >= a) cout << "YES\n";
        else cout << "NO\n";
    }
}
