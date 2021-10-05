//
// Created by 78136 on 2021/7/27.
//

#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> q;
    for (int i = 1; i <= 10; i++){
        q.push_back(i);
        cout << q.max_size() << endl;
    }
}