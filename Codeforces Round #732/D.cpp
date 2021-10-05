//
// Created by 78136 on 2021/7/13.
//

#include <bits/stdc++.h>
using namespace std;
/*
const int M = 1e5+100;
const int MOD = 998244353;
long long sum[M];
char s[M];

long long pow1(long long a, long long x){
    long long sum = 1;
    while (x){
        if (x&1) sum = (sum*a)%MOD;
        a = a*a%MOD;
        x >>= 1;
    }
    return sum;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sum[1] = 1;
    for (int i = 2; i <= M-99; i++){
        sum[i] = (sum[i-1]*i) % MOD;
    }

    int t;
    cin >> t;
    while (t--){
        int n;

        int tot_0 = 0, tot_11 = 0;
        cin >> n;
        cin >>s;
        for (int i = 0; i < n; i++){
            if (s[i] == '0') tot_0++;
            if (s[i] =='1' && s[i+1] == '1' && i+1 < n) {
                tot_11++; i++;
            }
        }
        if (tot_11 == 0 || tot_0 == 0) cout << "1\n";
        else cout << (sum[tot_11+tot_0] * pow1(sum[tot_0]*sum[tot_11]%MOD, MOD-2)) % MOD << endl;
    }
}*/