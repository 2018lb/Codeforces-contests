#include <bits/stdc++.h>
using namespace std;

int Map[200][200], tak[200][200], ans[200][200];

struct sd{
    int x, y, val;
}que[40000];

bool com(sd a, sd b){
    return a.val < b.val;
}



int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        memset(Map,0,sizeof(Map));
        memset(tak,0,sizeof(tak));
        memset(que,0,sizeof(que));
        memset(ans,0,sizeof(ans));

        int n, m, tot = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cin >> Map[i][j];
                sd cnt;
                cnt.x = i; cnt.y = j; cnt.val = Map[i][j];
                que[tot++] = cnt;
            }
        }

        sort(que, que+tot, com);

        for (int i = 0; i < m; i++){
            tak[que[i].x][que[i].y] = 1;
            ans[i+1][que[i].x] = que[i].val;
        }

        for (int i = 1; i <= n; i++){
            int k = 1;
            for (int j = 1; j <= m; j++){
                if (tak[i][j]) continue;
                while (ans[k][i] != 0) k++;
                ans[k][i] = Map[i][j];
            }
        }

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cout << ans[j][i] << ' ';
            }
            cout << endl;
        }

    }

    return 0;
}
