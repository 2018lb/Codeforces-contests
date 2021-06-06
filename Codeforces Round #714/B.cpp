#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
const int M = 1e9+7;
int a[N];

bool com(int a, int b){return a < b;}

int main(void){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        a[n+1] = -1;
        sort(a+1,a+1+n, com);

        long long num = 1;
        while (a[num] == a[num+1]) num++;

        if (num < 2) {
            cout << 0 << endl;
            continue;
        }

        int pd = (a[num] & a[num+1]), k = 1;

        if (num != n && pd != a[1]){
            cout << 0 << endl;
            continue;
        }


        for (int i = num + 1; i <= n; i++){
            if (pd != (a[num] & a[i])){
                k = 0; break;
            }
        }

        if (k == 0){
            cout << 0 << endl;
            continue;
        }

        long long ans = 1;
        ans = num*(num-1)%M;

        for (int i = 1; i <= n-2; i++){
            ans = ans * (long long)i % M;
        }

        cout << ans << endl;

    }

}