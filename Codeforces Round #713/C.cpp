#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
char s[N];


int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int num[5];
        cin >> num[0] >> num[1];
        int n = num[0]+num[1];
        cin >> s;
        int pd = 0;
        for (int i = 0; i < n; i++){

            if (s[i] != '?'){
                num[s[i]-'0']--;
                if (s[n-i-1] != '?'&& s[n-i-1] != s[i]){
                    pd = 1; break;
                }
            }

            if (s[i] == '?' && s[n-i-1] != '?'){
                s[i] = s[n-i-1];
                num[s[i]-'0']--;
            }
        }

        if (num[0] < 0 || num[1] < 0 || (num[0]%2 == 1 && num[1]%2 == 1) || pd){
            cout << -1 << endl;
            continue;
        }


        num[2] = 99;
        for (int i = 0; i < n; i++){
            if (s[i] != '?') continue;

            if (i==n-i-1){
                if (num[0]%2 == 1 && num[0]>0){
                    num[0]--;
                    s[i] = '0';
                    continue;
                }else
                {
                    if (num[1]%2 == 1 && num[1]>0)
                    {
                        num[0]--;
                        s[i] = '1';
                        continue;
                    }else{
                        pd = 1; break;
                    }
                }
            }

            if (num[0] >= 2){
                s[i] = s[n-i-1] = '0';
                num[0] -= 2;
            }else{
                if (num[1] >= 2) {
                    s[i] = s[n-i-1] = '1';
                    num[1] -= 2;
                }else{
                    pd = 1; break;
                }
            }
        }

        if (pd) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++) cout << s[i];
        cout << endl;
    }

}
