//
// Created by 78136 on 2021/7/13.
//

#include <bits/stdc++.h>
using namespace std;

double ans = 0;

void dfs(double c, double m, double p, double v, double tim, double op){
    ans += op*p*tim;
    if (1-p < 0.000001) return;
    if (m > 0.000001) {
        double c1 = c, m1 = m, p1 = p;
        if (c > 0.000001){
            c1 += min(m,v)/2.;
            p1 += min(m,v)/2.;
        }else
            p1 += min(m,v);
        m1 -= min(m,v);
        dfs(c1,m1,p1,v,tim+1,op*m);
    }
    if (c > 0.000001) {
        double c1 = c, m1 = m, p1 = p;
        if (m > 0.000001){
            m1 += min(c,v)/2.;
            p1 += min(c,v)/2.;
        }else
            p1 += min(c,v);
        c1 -= min(c,v);
        dfs(c1,m1,p1,v,tim+1,op*c);
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        double c,m,p,v;

        ans = 0;
        cin >> c >> m >> p >> v;
        dfs(c,m,p,v,1,1);


        cout.precision(13);
        cout << ans << endl;
    }
}