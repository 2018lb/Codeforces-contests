#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int cnt = 1;
        while (cnt <= n){
            cnt *= 2;
        }

        cout << cnt/2-1 << endl;
    }
    return 0;
}
