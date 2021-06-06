
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
 
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if (x != 2) ans++;
        }
        cout << ans << endl;
    }
 
    return 0;
}