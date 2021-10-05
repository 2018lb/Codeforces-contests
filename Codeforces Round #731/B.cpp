

//
// Created by 78136 on 2021/7/14.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        char s[30];
        cin >> s;
        int h = 0, t = strlen(s)-1, cnt = t+'a';

        int pd = 1;
        while (h!=t){
            if (s[h] == cnt) {
                h++; cnt--;
                continue;
            }
            if (s[t] == cnt){
                t--;cnt--;
                continue;
            }
            pd = 0;break;
        }

        if (pd&&s[h]=='a') cout << "YES\n";
        else cout << "NO\n";
    }
}