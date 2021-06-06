#include <bits/stdc++.h>
using namespace std;

int card[60];

int main(void){
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if (card[x] == 0) card[x] = i;
    }
    for (int i = 1; i <= q; i++){
        int x;
        cin >> x;
        cout << card[x] << ' ';
        for (int i = 1; i <= 50; i++){
            if (card[i] < card[x])card[i]++;
        }
        card [x] = 1;
    }
}