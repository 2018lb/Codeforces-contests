#include <bits/stdc++.h>
using namespace std;

int a[100];

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--  ){
        long long n;
        cin >> n;
        for (int i = 1; i <= 2*n; i++){
            cin >> a[i];
        }

        sort(a+1, a+1+2*n);

        for (int i = 1; i <= n; i++){
            cout << a[i] << ' ' << a[i+n] << ' ';
        }
        cout << "\n";
    }
}
