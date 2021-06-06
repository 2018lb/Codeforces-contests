#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+100;
long long num[20];
long long ans[N];
long long m = 1e9+7;

void init(){
    ans[0] = 1;
    num[0] = 1;
    for (int i = 1; i <= N-10; i++){
        int  k = num[9];
        for (int i = 9; i >= 1; i--){
            num[i] = num[i-1];
        }
        num[0] = k, num[1] = (num[1] + k)%m;
        ans[i] = (ans[i-1] + k)%m;
    }
}

void work(){
    int n, k;
    long long tot = 0;
    cin >> n >> k;
    while (n){
        int x = n % 10;
        tot = (tot + ans[x+k])%m;
        n /= 10;
    }
    cout << tot << endl;
}

char s[100000] = "0", c[100000];
int main(){
    ios::sync_with_stdio(false);
    init();
    int t;
    cin >> t;
    while (t--) work();
}