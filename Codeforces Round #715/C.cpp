#include <bits/stdc++.h>
using namespace std;

const int N = 2010;

long long a[N], d[N][N];

bool com(long long a, long long b){return a > b;}


int main() {
    ios::sync_with_stdio(false);
    memset(d, 0x3f, sizeof(d));

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        d[i][i] = 0;
    }

    sort(a+1, a+1+n, com);
for (int q = 1; q <= 30; q++)
    for (int k = 1; k <= n; k++){
        for (int i = k; i > 0; i--){
            d[i][k] = min(d[i][k], d[i+1][k] + a[i] -a[k]);
        }
        for (int j = k; j <= n; j++){
            d[k][j] = min(d[k][j], d[k][j-1] + a[k] -a[j]);
        }
    }


    cout << d[1][n] << endl;

}