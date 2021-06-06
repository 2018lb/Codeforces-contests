#include <bits/stdc++.h>
using namespace std;

int a[110];


int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        memset(a, 0, sizeof(a));
        int n, k;
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int cnt = n, cnt1 = 1;
        for (int i = k; i >= 1; i--){
            cnt = n;
            while (a[cnt1] == 0) cnt1++;

            if (cnt <= cnt1) break;
            a[cnt]++; a[cnt1]--;
        }

        for (int i = 1; i <= n; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
