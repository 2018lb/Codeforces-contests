
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, a1 = -1, a2 = -1, x, num1 = 0, num2 = 0, ans1, ans2;
        cin >> n;
        for (int i= 1; i <= n; i++){
            cin >> x;
            if (a1 == -1){
                a1 = x;
                ans1 = i;
                continue;
            }
            if (a1 == x){
                num1++;
                continue;
            }
            if (a2 == -1){
                a2 = x;
                ans2 = i;
                continue;
            }
            if (a2 == x){
                num2++;
            }
        }
        if (num1 != 0 ) cout << ans2 << endl;
        else cout << ans1 << endl;
    }
 
}