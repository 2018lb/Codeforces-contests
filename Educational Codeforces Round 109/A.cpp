#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    return b ? gcd(b, a % b) : a;
}

int main() {
    ios::sync_with_stdio(false);


    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> k;
        if (k == 0 || k == 100){
            cout <<"1\n";
            continue;
        }

        int op = gcd(k,100-k);
        cout << k/op+(100-k)/op << endl;
    }
}
