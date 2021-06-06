#include <bits/stdc++.h>
using namespace std;

int a[5010];
vector<int> l, r;
int f[5010][5010];

int main() {
    ios::sync_with_stdio(false);

    int n;
    memset(f, 0x3f, sizeof(f));

    l.clear(); r.clear();
    l.push_back(0), r.push_back(0);

    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i]) l.push_back(i);
        else r.push_back(i);
        f[0][i] = 0;
    }

    int n1 = l.size(), n2 = r.size();

    f[0][0] = 0;
    for (int i = 1; i < n1; i++){
        for (int j = i; j < n2; j++){
            f[i][j] = min(f[i][j-1], f[i-1][j-1] + abs(l[i] - r[j]) );
        }
    }

    cout << f[n1-1][n2-1] << endl;
}