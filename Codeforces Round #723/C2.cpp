#include <bits/stdc++.h>
using namespace std;

long long a[200100];

int main() {
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long> > q;

    long long tot = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        tot += a[i];
        q.push(a[i]);

        if (tot < 0){
            tot -= q.top();
            q.pop();
        }
    }
    cout << (int) q.size();

}
