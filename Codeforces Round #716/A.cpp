#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n,pd = 0;
        cin >> n;
        for (int i = 1; i <= n; i++){
            int x;
            double k;
            cin >> x;
            k = sqrt(x);
            x = sqrt(x);
            if (k!=x) pd = 1;
        }

        if (pd) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
