#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

int ans1[N], ans2[N];
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        ans1[0] = ans2[0] = 0;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if (x%2) ans1[++ans1[0]] = x;
            else ans2[++ans2[0]] = x;
        }
        for (int i = 1; i <= ans1[0]; i++){
            cout << ans1[i] << ' ';
        }
        for (int i = 1; i <= ans2[0]; i++){
            cout << ans2[i] << ' ';
        }
        cout << endl;
    }
}




int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cin >> s;
        int T = 0, M = 0, last = 0;
        bool pd = true;
        for (int i = 0; i < n; i++){

            if (s[i] == 'T') T++;
            if (s[i] == 'M') M++;
            if (i == n-1 && T != M*2) pd = false;
            if (T == M*2 && T != 0){
                int cnt_t =0, cnt_m = 0, q_t = 0;
                for (int j = last; j <= i; j++){

                    if (s[j] == 'T'){
                        cnt_t++;
                        if (cnt_t <= M) q_t++;
                        else{
                            cnt_m--;
                            if (cnt_m < 0){
                                pd = false;
                                break;
                            }
                        }
                    }
                    else{
                        cnt_m++;
                        q_t--;
                        if (q_t < 0){
                            pd = false;
                            break;
                        }
                    }
                }

                T = M = 0;
                last = i+1;
            }

            if (pd == false) break;

        }

        if (pd)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
