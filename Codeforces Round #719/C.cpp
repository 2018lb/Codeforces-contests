#include <bits/stdc++.h>
using namespace std;


int ans[105][105];


        int n;
        cin >> n;
        if (n == 2) { cout << "-1\n"; continue; }

        int cnt = 0;
        for (int i = 1; i <= n*n; i++){
            if (cnt >= n*n) cnt = 1;

            ans[cnt / n][cnt % n] = i;
            cnt +=2;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) cout << ans[i][j] << ' ';
            cout << "\n";
        }
    }
}