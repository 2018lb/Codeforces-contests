#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
char a[N];
char ans_a[N], ans_b[N];

int main(void){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int  n;
        cin >> n;
        int count_0 = 0, count_1 = 0;
        cin >> a;

        if (n%2 || a[0]=='0' || a[n-1] == '0'){
            cout << "NO\n";
            continue;
        }

        for (int i = 0; i < n; i++){
            if (a[i] == '0') count_0++;
            else count_1++;
        }

        if (count_0%2){
            cout << "NO\n";
            continue;
        }

        int k1 = 0, k0 = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == '1'){
                if (k1 < count_1 / 2){
                    ans_a[i] = ans_b[i] = '(';
                }else{
                    ans_a[i] = ans_b[i] = ')';
                }
                k1++;
            }
            else{
                if (k0&1){
                    ans_a[i] = '(';
                    ans_b[i] = ')';
                }else{
                    ans_a[i] = ')';
                    ans_b[i] = '(';
                }
                k0++;
            }
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++) cout << ans_a[i];
        cout << endl;
        for (int i = 0; i < n; i++) cout << ans_b[i];
        cout << endl;
    }

}
