#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010];
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= k; i++){
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++){
            dp[0][i] = 0;
        }

        for (int i = 1; i <= k; i++){
            for (int j = 1; j <= n; j++){
                dp[i][j] = dp[i][j-1] + dp[i-1][n-j];
                dp[i][j] =dp[i][j] % 1000000007;
            }
        }

        cout << dp[k][n] << endl;

    }
}