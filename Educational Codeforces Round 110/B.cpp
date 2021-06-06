#include <bits/stdc++.h>

using ll = long long;
using namespace std;
const int N = 3e5 + 10;
const int Mod = 1e9 + 7;

int a[N],kk[N];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num = 0;
        for(int i = 1; i <= n; i++){
            cin >> kk[i];
            if (!(kk[i] & 1)) a[++num] = kk[i];
        }

        for(int i = 1; i <= n; i++){
            if (kk[i] & 1) a[++num] = kk[i];
        }

        int ans = 0;
        for(int i = 1; i <= n; i++)
            for(int j = i + 1; j <= n; j++)
                if (__gcd(a[i],2 * a[j]) > 1) ans++;
        cout << ans <<"\n";

    }
}