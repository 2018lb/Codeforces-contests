#include <bits/stdc++.h>
using namespace std;
int a[100100];


int main(void){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n, min_num = 2e9, pos;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            if (min_num > a[i]){
                pos = i;
                min_num = a[i];
            }
        }

        cout << n-1 << endl;
        //if (n == 1) continue;
        for (int i = 1; i <= n; i++){
            if (i == pos) continue;
            cout << pos << ' ' << i << ' ' << min_num << ' ' << min_num + abs(pos-i) << endl;
        }
    }
}
