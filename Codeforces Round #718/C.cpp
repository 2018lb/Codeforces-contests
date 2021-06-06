#include <bits/stdc++.h>
using namespace std;

int a[510], Map[510][510];


int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        Map[i][i] = a[i];
        int cnt_x = i, cnt_y = i;
        for (int k = 1; k < a[i]; k++){
            if (Map[cnt_x][cnt_y-1] == 0 && cnt_y > 1) cnt_y--;
            else cnt_x++;
            Map[cnt_x][cnt_y] = a[i];
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << Map[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
