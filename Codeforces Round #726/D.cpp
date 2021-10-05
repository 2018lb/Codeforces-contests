//
// Created by 78136 on 2021/6/18.
//
/*
#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        int x;
        cin >> x;
        if (x % 2 == 1) {
            cout << "Bob\n";
            continue;
        }
        long long cnty = 1, cnt = 0,kk = 0;
        while (cnty < x){
            cnty *= 2;
            cnt++;
            if (cnty == x && cnt %2 == 1){
                cout << "Bob\n";
                kk = 1;
                break;
            }

        }
        if(kk) continue;
        cout << "Alice\n";
    }
}*/