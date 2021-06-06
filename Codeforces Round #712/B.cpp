#include <bits/stdc++.h>
using namespace std;

const int  N = 3e5+10;
char s[N],t[N];

int s_0, s_1, t_0, t_1;


int main(void){

    int T;
    scanf("%d", &T);
    while(T--){
        bool ans = true;
        s_0 = s_1 = t_0 = t_1 = 0;
        int n, head = 1;
        scanf("%d", &n);
        scanf("%s", s);
        scanf("%s", t);
        for (int i = 0; i < n; i++){
            if (s[i] == '0') s_0 += 1;
            else s_1 += 1;

            if (t[i] == '0') t_0 += 1;
            else t_1 += 1;

            if(head){
                head = 0;
                if (s_0 != t_0) ans = false;
                continue;
            }

            if (abs(s[i] - s[i-1]) != abs(t[i] - t[i-1])){
                ans = false;
                break;
            }

            if (s_0 != t_0) ans = false;
            if (s_0 == s_1 || t_0 == t_1){
                if (s_0 != t_0){
                    ans = false;
                    break;
                }else{
                    ans = true;
                    head = 1;
                }
            }
        }

        if (ans) printf("YES\n");
        else printf("NO\n");
    }

}