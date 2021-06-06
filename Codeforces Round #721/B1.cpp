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
