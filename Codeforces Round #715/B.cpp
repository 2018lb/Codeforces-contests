#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

char s[N];

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cin >> s;
        int count_T = 0, count_M = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == 'T') count_T++;
            else count_M++;
        }
        bool pd = true;
        if (count_M*2!=count_T) pd = false;

        int cnt_t = 0, T = 0, TM = 0;
        if (pd){
            for (int i = 0; i < n; i++){
                if (s[i] == 'T'){
                    cnt_t++;
                    if (cnt_t <= count_M) T++;
                    else{
                        TM--;
                        if (TM < 0){
                            pd = false;
                            break;
                        }
                    }
                }
                else{
                    TM++;
                    T--;
                    if (T < 0){
                        pd = false;
                        break;
                    }
                }
            }
        }

        if (pd)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}