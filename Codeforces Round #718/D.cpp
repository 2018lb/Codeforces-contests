#include <bits/stdc++.h>
using namespace std;/*

int Map_heng[510][510], Map_shu[510][510];

int min_cnt[40][40][20];
struct sd{
    int x, y, val, k;

};
list<sd> q;
int kk[40][40][20];

int n,m,k;

void right(sd cnt, int x, int y){

    cnt.val += Map_heng[cnt.x][cnt.y];
    cnt.y += 1;
    cnt.k++;

    if (cnt.k > k) return;
    if (cnt.val < min_cnt[x-cnt.x+20][y-cnt.y+20][cnt.k]){

        min_cnt[x-cnt.x+20][y-cnt.y+20][cnt.k] = cnt.val;
        q.push_back(cnt);
    }
    return;
}

void left(sd cnt, int x, int y){

    cnt.val += Map_heng[cnt.x][cnt.y-1];
    cnt.y -= 1;
    cnt.k++;

    if (cnt.k > k) return;
    if (cnt.val < min_cnt[x-cnt.x+20][y-cnt.y+20][cnt.k]){

        min_cnt[x-cnt.x+20][y-cnt.y+20][cnt.k] = cnt.val;
        q.push_back(cnt);
    }
    return;
}

void down(sd cnt, int x, int y){

    cnt.val += Map_shu[cnt.x][cnt.y];
    cnt.x += 1;
    cnt.k++;

    if (cnt.k > k) return;
    if (cnt.val < min_cnt[x-cnt.x+20][y-cnt.y+20][cnt.k]){

        min_cnt[x-cnt.x+20][y-cnt.y+20][cnt.k] = cnt.val;
        q.push_back(cnt);
    }
    return;
}

void up(sd cnt, int x, int y){

    cnt.val += Map_shu[cnt.x-1][cnt.y];
    cnt.x -= 1;
    cnt.k++;

    if (cnt.k > k) return;
    if (cnt.val < min_cnt[x-cnt.x+20][y-cnt.y+20][cnt.k]){

        min_cnt[x-cnt.x+20][y-cnt.y+20][cnt.k] = cnt.val;
        q.push_back(cnt);
    }
    return;
}

int bfs(int x, int y){
    q.clear();
    sd cnt;
    cnt.x = x; cnt.y = y;
    cnt.val = 0; cnt.k = 0;

    q.push_back(cnt);
    int ans = 1e9;
    while (!q.empty()){

        cnt = q.front();
        q.pop_front();

        if (cnt.val> min_cnt[x-cnt.x+20][y-cnt.y+20][cnt.k]) continue;

        if (k % cnt.k == 0){
            ans = min(ans, cnt.val* k / cnt.k);
        }
        if (cnt.k == k){
            ans = min(ans, cnt.val);
            continue;
        }

        if (cnt.y!=m) right(cnt,x,y);
        if (cnt.y!=1) left(cnt,x,y);
        if (cnt.x!=n) down(cnt,x,y);
        if (cnt.x!=1) up(cnt,x,y);
    }
    return ans;
}

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

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            memset(min_cnt,0x3f, sizeof(min_cnt));
            cout << 2*bfs(i,j) << ' ';
        }
        cout << endl;
    }




    return 0;
}
*/