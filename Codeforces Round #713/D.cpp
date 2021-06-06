#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

long long a[N];

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin  >> t;
    while (t--){
        int n;
        long long tot = 0;
        map<long long,long long> pd;
        cin >> n;
        for (int i = 1; i <= n+2; i++){
            cin >> a[i];
            pd[a[i]] += 1;
            tot += a[i];
        }

        int ans = -1;
        for (int i = 1; i <= n+2; i++){
            if ((tot - a[i])%2 == 1) continue;
            if ((tot - a[i])/2 == a[i] && pd[a[i]] == 1) continue;
            if (pd[(tot - a[i])/2] >= 1){
                ans = i;
                break;
            }
        }
        if (ans == -1){
            cout << -1 <<endl;
            continue;
        }

        int k = 0;
        tot -= a[ans];
        for (int i = 1; i <= n+2; i++){
            if (i == ans) continue;
            if (k == 0 && tot == a[i]*2){
                k = 1;
                continue;
            }
            cout << a[i] << ' ';
        }
        cout << endl;
    }

}