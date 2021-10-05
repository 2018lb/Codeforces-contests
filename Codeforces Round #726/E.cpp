//
// Created by 78136 on 2021/6/18.
//

#include <bits/stdc++.h>
using namespace std;

const int N = 5e5+10;
char s[N], p[N];
int nxt[N], n;


void getnext(char *p)
{
    int i, j;
    nxt[0] = -1;
    i = 0; j = -1;
    while (i < n)
    {
        if (j == -1 || p[i] == p[j])
        {
            ++i;
            ++j;
            nxt[i] = j;
        }
        else
            j = nxt[j];
    }

}


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> n >> k;
    cin >> s;
    memset(nxt, 0,sizeof(nxt));
    getnext(s);

    nxt[0] = 1;
    int kk = n;
    nxt[1] = 0;
    for (int i = 1; i <= n; i++){
        if (s[nxt[i]] < s[i]){
            kk = i-1;
            break;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= k; i++){
        cout << s[cnt];
        cnt++;
        if (kk == 0) cnt = 0;
        if (cnt >= kk) cnt = 0;
    }
}
