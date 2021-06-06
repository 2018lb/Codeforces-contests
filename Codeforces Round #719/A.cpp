#include <bits/stdc++.h>
using namespace std;

int a[30];
char s[60];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        memset(a,0,sizeof(a));
        memset(s,0,sizeof(s));

        int n;
        cin >> n;
        cin >> s;

        int pd = 0;
        a[s[0]-'A'] = 1;
        for (int i = 1; i < n; i++){
            if (s[i] != s[i-1] && a[s[i]-'A']){
                pd = 1; break;
            }
            a[s[i]-'A'] = 1;
        }

        if (pd) cout << "NO\n";
        else cout << "YES\n";
    }
}
