#include <bits/stdc++.h>
using namespace std;

const int max_ = 3e5+100;

int h[max_], b[max_];
long long f[max_], ex_f[max_];

struct sd{
    long long num, high, val;
}s[max_];

int main(void){

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf("%d", &h[i]);
    }


    for (int i = 1; i <= n; i++){
        scanf("%d", &b[i]);
    }

    s[0].val = -2e9;
    int kk = 0;
    for (int i = 1; i <= n; i++){

        long long cnt = f[i-1];

        while (kk && s[kk].high > h[i]){
            cnt = max(cnt, ex_f[s[kk--].num]);
        }

        ex_f[i] = cnt;
        s[++kk].num = i; s[kk].high = h[i];
        s[kk].val = f[i] = max(cnt+b[i], s[kk-1].val);
    }
    printf("%lld", f[n]);


}



// Created by 78136 on 2021/3/21.
//

