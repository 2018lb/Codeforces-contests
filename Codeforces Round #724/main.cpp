#include <bits/stdc++.h>

using namespace std;
/*
const int N = 2000;

map<string, int> q;
char s[N];


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        q.clear();
        int n;
        cin >> n;
        cin >> s;

        string a;
        for (int i = 0; i < n; i++){
            a.clear();
            a = s[i];
            q[a] = 1;
        }

        for (int i = 0; i < n-1; i++){
            a.clear();
            a = s[i];
            a += s[i+1];
            q[a] = 1;
        }

        for (int i = 0; i < n-2; i++){
            a.clear();
            a = s[i];
            a += s[i+1];
            a += s[i+2];
            q[a] = 1;
        }

        int pd = 0;
        for (char i = 'a'; i <= 'z'; i++){
            a.clear();
            a += i;
            if (!q[a]) { pd = 1; cout << a << endl; break;}
        }
        if (pd) continue;

        for (char i = 'a'; i <= 'z'; i++){
            for (char j = 'a'; j <= 'z'; j++) {
                a.clear();
                a += i;
                a += j;
                if (!q[a]) {
                    pd = 1;
                    cout << a << endl;
                    break;
                }
            }
            if (pd) break;
        }

        if (pd) continue;

        for (char i = 'a'; i <= 'z'; i++){
            if (pd) break;
            for (char j = 'a'; j <= 'z'; j++) {
                if (pd) break;
                for (char z = 'a'; z <= 'z'; z++) {
                    a.clear();
                    a += i;
                    a += j;
                    a += z;
                    if (!q[a]) {
                        pd = 1;
                        cout << a << endl;
                        break;
                    }
                }
            }
        }
        if (pd) continue;

        cout << "\n";
    }
}
*/