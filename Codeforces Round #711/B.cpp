#include <bits/stdc++.h>
using namespace std;


const int N = 1e5+10;

int count_num[31];
long long abx[31];

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, w;

        abx[0] = 1;
        for (int i = 1; i <= 30; i++){
            abx[i] = abx[i-1] * 2;
        }

        cin >> n >> w;
        int x;
        for (int i = 0; i < n; i++){
            cin >> x;
            int temp = 0;
            while(x/2){
                temp++;
                x /= 2;
            }
            count_num[temp]++;
        }

        int ans = 1, tot = 0;
        while (tot < n){
            int cnt = w;
            for (int i = 30; i >= 0; i--){
                while (count_num[i] && cnt >= abx[i]){
                    count_num[i]--;
                    cnt -= abx[i];
                    tot++;
                }
            }
            ans++;
        }
        cout << ans - 1 << endl;
    }
}