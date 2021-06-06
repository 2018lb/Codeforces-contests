#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--  ){
        long long n;
        cin >> n;
        if (n % 11 == 0 || n % 111 == 0){
            cout << "YES\n";
            continue;
        }

        int k = 0;
        for (int i = 111; i <= n; i+=111){
            if ((n-i) % 11 == 0){
                cout << "YES\n";
                k = 1;
                break;
            }
        }

        if (k == 0) cout << "NO\n";
    }

}


