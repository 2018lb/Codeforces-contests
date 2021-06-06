#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int a[N];

bool com(int a, int b){
    return a < b;
}

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--  ){
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        sort(a+1, a+1+n, com);

        int minN = 1e9+10;
        for (int i = 1; i <= n; i++) {
            if (a[i] > 0) break;
            ans++;
            if (i > 1) minN = min(minN, a[i] - a[i - 1]);
        }

        for (int i = 1;i <= n; i++)
            if (a[i] > 0 && a[i] <= minN) {
                ans++;
                break;
            }

        cout << ans << endl;
    }

}
