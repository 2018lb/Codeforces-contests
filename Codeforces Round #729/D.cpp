#include <bits/stdc++.h>
using namespace std;

int kk[1000];
const int M = 1e9+7;

long long dp[550][550];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        char s[5];
        cin >> s;
        if (s[0] == '+') {
            cin >> kk[i];
        }else kk[i] = -1;
    }

    for (int i = 1; i <= n; i++){
        if (kk[i] == -1) continue;

        for (int j = 1; j < i; j++){
            for (int k = 1; k <= 500; k++){
                if ()
            }
        }
    }


    return 0;
}
