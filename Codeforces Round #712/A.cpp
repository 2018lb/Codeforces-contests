#include <bits/stdc++.h>
using namespace std;

const int  N = 3e5+10;
char s[N],t[N];

int main(void){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        int n = strlen(s);
        int k = 0, pd = 0;

        for (int i = n - 1; i >= 0; i--){
            if (s[i]  != 'a'){
                pd = 1;
                break;
            }
        }
        if(pd){
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = n - 1; i >= 0; i--){
            if (s[i] != 'a' && !k){
                k = 1;
                cout << 'a';
            }
            cout << s[n-i-1];
        }
        cout << endl;
    }

}