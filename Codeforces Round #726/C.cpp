//
// Created by 78136 on 2021/6/18.
//
/*
    #include <bits/stdc++.h>
    using namespace std;

const int N = 2e5+10;
int h[N];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> h[i];
        }
        sort(h,h+n);
        int kk = -1, cnt = 1e9+10;
        for (int i = 1; i < n; i++){
            if (abs(h[i] - h[i-1]) < cnt) {
                cnt = h[i] - h[i-1];
                kk = i;
            }
        }

        cout << h[kk-1] << ' ';
        for (int i = kk+1; i < n; i++){
            cout << h[i] << ' ';
        }
        for (int i = 0; i < kk-1; i++){
            cout << h[i] << ' ';
        }
        cout << h[kk] << endl;
    }
}*/