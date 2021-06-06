#include <bits/stdc++.h>
using namespace std;

char m[410][410];

struct poi{
    int x, y;
};


int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        memset(m,0,sizeof(m));
        int n;
        poi x, y;
        x.x = -1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
            for (int j = 0; j < n; j++)
            {
                if (m[i][j] == '*'){
                    if (x.x == -1){
                        x.x = i, x.y = j;
                    }else{
                        y.x = i, y.y = j;
                    }

                }
            }
        }
        if (x.x != y.x && x.y != y.y) m[x.x][y.y] = m[y.x][x.y] = '*';

        if (x.x == y.x){
            int k = (x.x+1)%n;
            m[k][y.y] = m[k][x.y] = '*';
        }

        if (x.y == y.y){
            int k = (x.y+1)%n;
            m[x.x][k] = m[y.x][k] = '*';
        }
        for (int i = 0; i < n; i++) cout << m[i] << endl;
    }

}
