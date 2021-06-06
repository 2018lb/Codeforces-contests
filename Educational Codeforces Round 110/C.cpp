#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+10;

char s[N];
long long f[N], Num[2][2];

int check()  {
    if (!Num[0][0] && !Num[1][1]) return 1;
    if (!Num[0][1] && !Num[1][0]) return 1;
    return 0;
}



int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        long long ans = 0;
        Num[0][0] = Num[0][1] = Num[1][0] = Num[1][1] = 0;

        int n = strlen(s);

        int k = 0;
        for (int i = 0; i < n; i++)  {

            int op = s[i] - '0';

            if (s[i] != '?')
                Num[i % 2][op]++;

            while (!check())  {
                if (s[i] != '?') Num[k % 2][s[k] - '0']--;
                k++;
            }

            ans += i - k;
            ans = ans + 1;
        }

       cout << ans << endl;
    }
*/