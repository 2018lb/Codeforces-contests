#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        if (b == 1){
            cout << "NO\n";
            continue;
        }
        if (b == 2) b *= 2;
        cout <<"YES\n";
        cout << a << ' ' << a*b-a <<' ' <<  a*b << endl;

    }
    return 0;
}
