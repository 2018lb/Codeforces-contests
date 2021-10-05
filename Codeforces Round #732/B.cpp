#include <bits/stdc++.h>
using namespace std;
/*
const int M = 1e5+100;
int sum[26][M];
char s[M];

int main(void){
    int t;
    cin >> t;
    while (t--){
        memset(sum, 0, sizeof(sum));
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++){
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                sum[s[j]-'a'][j]++;
            }
        }

        for (int i = 1; i < n; i++){
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                sum[s[j]-'a'][j]--;
            }
        }

        for (int i = 0; i < m; i++){
            for (int j = 0; j < 26; j++){
                if (sum[j][i]){
                    cout << char(j+'a');
                    continue;
                }
            }
        }
        cout << endl;
    }

}*/