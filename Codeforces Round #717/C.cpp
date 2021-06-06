#include <bits/stdc++.h>
using namespace std;
int a[2010];
int op[2010];
int d[200010];



int main() {
    ios::sync_with_stdio(false);

    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
        op[a[i]]++;
    }

    if (sum%2 == 1){
        cout << 0;
        return 0;
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++){
        cnt += a[i];
        d[0] = 1;
        for (int j=cnt; j>=0; j--){
            if (d[j]) d[j+a[i]] = 1;
        }
    }

    if (d[sum/2] == 0) {
        cout << 0;
        return 0;
    }


    int k = a[1];
    for(int i = 1; i <= n; i++) k = __gcd(k,a[i]);

    for(int i = 1;i <= n; i++) a[i] /= k;

    cout << 1 << endl;
    for(int i = 1; i <= n; i++) {
        if (a[i] & 1) {
            printf("%d\n", i);
            return 0;
        }
    }





    return 0;
}
