#include <bits/stdc++.h>
using namespace std;

long long a[5010], b[5010];
long long dp[5010][5010];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    long long tot = 0, ans = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i], tot+= a[i]*b[i];

    for (int i = 1; i <= n; i++)  dp[i][i] = tot;
    ans = tot;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i-j < 1 || i+j > n) break;
            dp[i-j][i+j] = dp[i-j+1][i+j-1] - a[i-j]*b[i-j] - b[i+j]*a[i+j] + a[i-j]*b[i+j] + a[i+j]*b[i-j];
            ans = max(ans, dp[i-j][i+j]);
        }

        dp[i][i+1] = dp[i][i]- a[i]*b[i] - a[i+1]*b[i+1] + a[i]*b[i+1] + a[i+1]*b[i];
        ans = max(ans, dp[i][i+1]);

        for (int j = 2; j <= n; j++){
            if (i-j+1 < 1 || i+j > n) break;
            dp[i-j+1][i+j] = dp[i-j+2][i+j-1] - a[i-j+1]*b[i-j+1] - b[i+j]*a[i+j] + a[i-j+1]*b[i+j] + a[i+j]*b[i-j+1];
            ans = max(ans, dp[i-j+1][i+j]);
        }
    }
    cout << ans;
}
