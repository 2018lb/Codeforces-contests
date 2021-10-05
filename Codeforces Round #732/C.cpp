//
// Created by 78136 on 2021/7/12.
//

#include <bits/stdc++.h>
using namespace std;
/*
const int M = 1e5+100;

int a[M],sum[2][M];

bool com(int a, int b){
    return a < b;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        memset(sum,0,sizeof(sum));
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            sum[i%2][a[i]]++;
        }

        sort(a+1, a+1+n, com);

        int pd = 1;
        for (int i = 1; i <= n; i++){
            if (sum[i%2][a[i]] == 0){
                pd = 0; break;
            }
            sum[i%2][a[i]]--;
        }

        if (pd){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
*/