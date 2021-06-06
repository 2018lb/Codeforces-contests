#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n;
        k = n;

        int sum = 0, pd = 0;
        while (k > 9){
            sum++;
            k /= 10;
        }

        int cnt = 0;
        for (int i = 0; i <= sum; i++){
            cnt = cnt*10+k;
        }

        if (cnt > n) k--;
        int ans = sum*9 + k;
        cout << ans << endl;
    }
}