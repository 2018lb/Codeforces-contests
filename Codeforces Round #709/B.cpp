#include <bits/stdc++.h>

using namespace std;

const int M = 1e5+10;
int a[M];

int main(void){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        long long n, c = -1, m = -1, k1 = -2e9, k2 = -2e9;
        int max_num = 0;
        cin >> n;
        for (int i = 1; i <= n; i++){

            cin >> a[i];
            max_num = max(max_num, a[i]);

            if (i == 1||k1 == -2e9+10) continue;

            if (k1 == -2e9 || k1 == a[i] - a[i-1]) {
                k1 = a[i] - a[i-1];
                continue;
            }

            if (k2 == -2e9 || k2 == a[i] - a[i-1]) {
                k2 = a[i] - a[i-1];
                continue;
            }

            k1 = k2 = -2e9+10;
        }
        if (k2 == -2e9) {
            cout << 0 << endl;
            continue;
        }

        if (k1 < k2) swap(k1,k2);
        if (k1-k2 <= max_num) {
            cout << -1 << endl;
            continue;
        }

        cout << k1 - k2 << " " << k1 << endl;

    }
    return 0;
}