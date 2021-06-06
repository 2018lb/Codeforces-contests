#include <bits/stdc++.h>
using namespace std;
 
const int N = 2e5+10;
 
struct sd{
    int u, val;
}st[N];
 
long long ans[N];
long long sum[N], num[N], tot[N];
 
bool com (sd a, sd b){
    return a.u < b.u|| (a.u==b.u && a.val > b.val);
}
 
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        memset(tot,0,sizeof(tot));
        memset(ans,0,sizeof(ans));
 
        long long n;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> st[i].u, tot[st[i].u]++;
 
        for (int i = 1; i <= n; i++){
           cin >> st[i].val;
        }
 
        sort(st+1, st+1+n, com);
 
        int k = 1;
        sum[k] = st[1].val;
        for (int i = 2; i <= n; i++){
            if (st[i].u != st[i-1].u){
 
                for (int j = 1; j <= n; j++){
                    if (j > tot[st[i-1].u]) break;
 
                    ans[j] += sum[tot[st[i-1].u] - (tot[st[i-1].u]%j)];
                }
 
                k = 1;sum[1] = st[i].val;
                continue;
            }
            sum[++k] = st[i].val;
            sum[k] += sum[k-1];
        }
        for (int j = 1; j <= n; j++){
            if (j > tot[st[n].u]) break;
 
            ans[j] += sum[tot[st[n].u] - (tot[st[n].u]%j)];
        }
 
 
        for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << endl;
 
    }
}