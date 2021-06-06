#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
int a[N], max_ans[N], min_ans[N];

bool min_num[N];
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        priority_queue<int,vector<int>,less<int>> max_num;
        memset(min_num, 0,sizeof (min_num));

        cin >> n;
        int min_ = 1;

        for (int i = 1; i <= n; i++){
            cin >> a[i];
            if (a[i] != a[i-1]){
                max_ans[i] = min_ans[i] = a[i];
                min_num[a[i]] = 1;
                for (int j = a[i-1]+1; j < a[i]; j++){
                    max_num.push(j);
                }
                continue;
            }

            while (min_num[min_]) min_++;

            max_ans[i] = max_num.top();
            max_num.pop();
            min_ans[i] = min_;
            min_num[min_] = 1;
        }

        for (int i = 1; i <= n; i++) cout << min_ans[i] << " ";
        cout << endl;

        for (int i = 1; i <= n; i++) cout << max_ans[i] << " ";
        cout << endl;
    }
    return 0;
}