#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        if (k > (n - 1) / 2){
            cout << -1 << endl;
            continue;
        }
        int max_ = n, min_ = 1;
        for (int i = 1; i <= n; i++){

            if (k == 0) {
                cout << max_-- << ' ';
                continue;
            }

            if (i%2 == 1){
                cout << min_++ << ' ';
            }else{
                cout << max_-- << ' ';
                k--;
            }
        }
        cout << endl;
    }
}
