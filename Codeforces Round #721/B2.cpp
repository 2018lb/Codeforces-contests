#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
char s[N];

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cin >> s;
        int tot = 0;

        int op = 0, kkk = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '0') op++;
            if (s[i] != s[n-i-1]){
                kkk = 1;
            }
        }

        if (kkk == 1) {
            if (n % 2 == 1 && op == 2 && s[n / 2] == '0') {
                cout << "DRAW\n";
                continue;
            }

            cout << "ALICE\n";
            continue;
        }


        for (int i = 0; i < n; i++){
            if (s[i] == '0') tot++;
        }

        if (tot == 1) {
            cout << "BOB\n";
            continue;
        }

        if (tot == 0) cout << "DRAW\n";
        else{
            if (tot%2) cout << "ALICE\n";
            else cout << "BOB\n";
        }



    }
    return 0;
}
