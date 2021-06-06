#include <bits/stdc++.h>
using namespace std;

int a[2010];
int op[2010];

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        memset(a, 0, sizeof(a));
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];

        }

        op[1] = a[1];
        for(int i = 2; i <= n; i++){
            op[i] = (op[i-1]^a[i]);
        }

        if (op[n] == 0){
            cout << "YES" << endl;
            continue;
        }
        int pd = 0;
        for (int i = 1; i <= n-2; i++){
            for (int j = i+1; j <= n-1; j++){
                if (op[i] == (op[j]^op[i]) && op[i] == (op[n]^op[j])){
                    pd = 1;
                    break;
                }
            }
            if (pd) break;
        }

        if (pd) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}
