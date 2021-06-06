#include <bits/stdc++.h>
using namespace std;

int a[100];

int main() {
    ios::sync_with_stdio(false);


    int t;
    cin >> t;
    while (t--){
        int n;
        int pd = 0;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin>> a[i];
            if (a[i] != i) pd = 1;
        }

        if (pd == 0) { cout << "0\n"; continue; }

        if (a[1] == 1 || a[n] == n) { cout << "1\n"; continue; }

        if (a[1] == n && a[n] == 1) { cout << "3\n"; continue; }

        cout << "2\n";
    }
}
