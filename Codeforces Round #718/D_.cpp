#include <bits/stdc++.h>
using namespace std;

int Map_heng[510][510], Map_shu[510][510];

int dp[510][510][20];

int n,m,k;
int main() {
    ios::sync_with_stdio(false);

    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j < m; j++)
            cin >> Map_heng[i][j];

    for (int i = 1; i < n; i++)
        for (int j = 1; j <= m; j++)
            cin >> Map_shu[i][j];

    if (k&1){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cout << -1 << ' ';
            }
            cout << endl;
        }
        return 0;
    }

    k/=2;
    memset(dp,0x3f,sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j][0] = 0;
        }
    }

    for (int s =1; s <= k; s++){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
               if (i != 1) dp[i][j][s] = min(dp[i][j][s], dp[i-1][j][s-1] + Map_shu[i-1][j]);
               if (i != n) dp[i][j][s] = min(dp[i][j][s], dp[i+1][j][s-1] + Map_shu[i][j]);
               if (j != 1) dp[i][j][s] = min(dp[i][j][s], dp[i][j-1][s-1] + Map_heng[i][j-1]);
               if (j != m) dp[i][j][s] = min(dp[i][j][s], dp[i][j+1][s-1] + Map_heng[i][j]);
           }
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) {
            cout << dp[i][j][k] *2 << ' ';
        }
        cout << endl;
    }


    return 0;
}
