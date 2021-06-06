#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    return b ? gcd(b, a % b) : a;
}

bool check(long long x){
    long long t = x, sum = 0;
    while (t){
        sum += t %10;
        t /= 10;
    }
    if (gcd(sum, x) != 1) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        while (!check(n++));
        cout << n - 1 << endl;
    }
    return 0;
}
