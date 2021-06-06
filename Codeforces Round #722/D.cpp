#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+10;

long long tot[N];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = i; j <= n; j += i)
            tot[j]++;

        long long ans = 0, sum  = 0;
    for (int i = 1; i <= n; i++){
        ans = (sum +  tot[i]) % 998244353;
        sum = (sum + ans) % 998244353;
    }
    cout << ans << endl;
}

