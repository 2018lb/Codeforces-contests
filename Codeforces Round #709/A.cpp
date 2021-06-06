#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    ios::sync_with_stdio(true);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        long long a, b;
        cin >> a >> b;
        cout << a*b << endl;
    }


    return 0;
}
