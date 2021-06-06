#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a <  b) swap(a,b);
        if (c < d) swap(c,d);
        if (b > c || d > a) {
            printf("NO\n");
        }
        else printf("YES\n");
    }
}
