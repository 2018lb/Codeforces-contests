#include <bits/stdc++.h>
using namespace std;
/*
int a[200], b[200];
int ans[5][200];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n, sum_a = 0, sum_b = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            sum_a += a[i];
        }

        for (int i = 0; i < n; i++){
            cin >> b[i];
            sum_b += b[i];
        }

        if (sum_a != sum_b) {
            cout << "-1\n";
            continue;
        }

        int cnt_ma = 0, cnt_mi = 0, tot = 0;
        while (cnt_ma < n&&cnt_mi < n){
            while (a[cnt_ma] <= b[cnt_ma]) {
                cnt_ma++;
                if (cnt_ma == n) break;
            }

            while (a[cnt_mi] >= b[cnt_mi]) {
                cnt_mi++;
                if (cnt_mi == n) break;
            }

            if (cnt_ma == n) break;

            ans[1][tot] = cnt_mi+1;
            ans[0][tot] = cnt_ma+1;
            a[cnt_mi]++; a[cnt_ma]--;
            tot++;
        }

        cout << tot << endl;
        for (int i = 0; i < tot; i++){
            cout << ans[0][i] << ' ' << ans[1][i] << endl;
        }


    }
    return 0;
}
*/