#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

long long num[N+N], suo[N];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        memset(num, 0, sizeof(num));
        suo[0] = 0;

        for (int i = 1; i <= n; i++){
            int x;
            cin >> x;
            x =x - i + N;
            if (num[x] == 0){
                suo[++suo[0]] = x;
            }
            num[x]++;
        }

        long long ans = 0;
        for (int i = 1; i <= suo[0]; i++){
            ans += num[suo[i]]*(num[suo[i]]-1)/2;
        }

        cout << ans << endl;
    }
}
