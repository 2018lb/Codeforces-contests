#include <bits/stdc++.h>
using namespace std;

int kk[1000];
const int M = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i <= 1000; i++){

        int op = 0;
        for (int k = 2; k <= sqrt(i); k++){
            if(i%k == 0) {
                op = 1; break;
            }
        }
        if (op == 1) continue;

        int cnt = i;
        while (cnt <= 1000){
            kk[cnt] = i;
            cnt *= i;
        }
    }
    int t;
    cin >> t;
    while(t--){
        long long n, ans = 0;
        cin>> n;
        long long sum = 1;
        for (int i = 2; i <= 1000&&sum<=n; i++){

            if (!kk[i]) continue;
            sum *= kk[i];

            ans=(ans+(n/sum*(kk[i]-1))%M*i%M)%M;
            ans=(ans+(n%sum/(sum/kk[i])*i)%M)%M;
        }
        cout << ans << endl;
    }
    return 0;
}
