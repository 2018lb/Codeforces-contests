#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    return b ? gcd(b, a%b) : a;
}

long long de(int x){
    int num = 1;
    while (--x) num*=10;
    return num;
}

int main() {
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--){
        int a, b, c;
        cin >> a >> b >> c;
        int c_ = de(c)+7;
        if (c == 1) c_ = 7;
        if (a == b && b == c){
            if (a == 1) c_ = 1;
            cout << c_*2 <<' ' << c_<< endl;
            continue;
        }

        int a_ = de(a-c+1), b_ = de(b-c+1)+1;
        if (b == c) b_ = 1;
        cout << a_*c_ <<' '<< b_ * c_ << endl;
    }
   //cout << gcd(107*1000000,107);

}
