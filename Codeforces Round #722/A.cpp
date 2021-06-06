#include <bits/stdc++.h>
using namespace std;

int a[200];

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--  ){
        int n;
        cin >> n;
        int num = 1e9, sum = 0;
        for (int i = 1; i <= n; i++){

            cin >> a[i];
            if (a[i] < num){
                num = a[i];
                sum = 0;
            }
            if (a[i] == num) sum++;
        }

        cout << n- sum << endl;
    }

}
