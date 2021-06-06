#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
long long l[N], r[N];

vector<int> q[N];
long long dp[N][2];

void dfs(int u, int fa){
    for (auto v:q[u]){
        if (v != fa) {
            dfs(v,u);

            dp[u][0] += max(dp[v][0] + abs(l[u] - l[v]),dp[v][1] + abs(l[u] - r[v]));
            dp[u][1] += max(dp[v][0] + abs(r[u] - l[v]),dp[v][1] + abs(r[u] - r[v]));
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){

        memset(dp,0,sizeof(dp));

        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> l[i] >> r[i];
        }
        for (int i = 1; i < n; i++){
            int x, y;
            cin >> x >> y;
            q[x].push_back(y);
            q[y].push_back(x);
        }

        dfs(1,0);
        cout << max(dp[1][0],dp[1][1]) << endl;
        for (int i = 1; i <= n; i++) q[i].clear();
    }

}
