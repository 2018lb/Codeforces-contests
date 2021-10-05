#include <bits/stdc++.h>

using namespace std;

const int N = 5e6+100;
int a[N];
set<int> q;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        q.clear();

        int n;
        int pd = 0;
        cin >> n;

        for (int i = 1; i <= n; i++){

            cin >> a[i];
        }
        for (int i = 1; i <= n; i++){

            q.insert(a[i]);
            if (i == 1 )continue;
            if (a[i] == a[i-1]) continue;

            int k1 = a[i], k2 = a[i-1];
            if (k1< k2) swap(k1,k2);

            int qo = *q.upper_bound(k2);
            if (*q.upper_bound(k2) < k1){
                pd = 1;
                break;
            }
        }
        if (pd) cout << "NO\n";
        else cout << "YES\n";
    }
}