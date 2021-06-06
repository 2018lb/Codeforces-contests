#include <bits/stdc++.h>
using namespace std;
int pd[28][28];
int sum[28];

int main(void){
    int n, k;
    cin >> n >> k;

    /*int last = 0;
    cout << 'a';

    for (int i = 2; i <= n; i++){

        int min_num = pd[last][0], x = 0;
        for (int j = 0; j < k; j++){
            if (pd[last][j] < min_num||(pd[last][j] == min_num && sum[j] < sum[x])){
                min_num = pd[last][j];
                x = j;
            }
        }
        sum[last]++;
        cout << char(x+'a');
        pd[last][x]++;
        last = x;
    }*/

     int cnt = 1, pd = 0;
     cout << 'a';
     while (!pd){
         if (1 == n) break;

         for (int i = 0; i < k; i++){
             for (int j = k-1; j > i; j--){
                 cout << char(i+'a');
                 cnt++;
                 if (cnt == n) {
                     pd = 1; break;
                 }
                 cout << char(j+'a');
                 cnt++;
                 if (cnt == n) {
                     pd = 1; break;
                 }
             }
             if (i == k-1) {
                 cout << char(i + 'a');
                 cnt++;
                 if (cnt == n) {
                     pd = 1;
                     break;
                 }
             }
             if (pd) break;;
         }
         if (pd) break;
         for (int i = k-2; i >= 0; i--) {
             cout << char(i+'a');
             cnt++;
             if (cnt == n) {
                 pd = 1; break;
             }
         }
     }
}