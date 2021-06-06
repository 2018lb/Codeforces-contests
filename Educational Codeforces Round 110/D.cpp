#include <bits/stdc++.h>

using namespace std;
const int N =  6e5;
char s[N];

struct sd{
    int num;
    int pd;
}tree[N];

long long tot;

void build(int l, int r, int n, int num){

    n = tot - num;
    if (l == r){
        tree[num].num = 1;
        return;
    }

    tree[num].pd = s[n];
    int mid = (r-l) / 2;

    build(l, l+mid, n-2, num*2+1);
    build(r-mid, r, n-1, num*2);

    if (tree[num].pd == '?') {
        tree[num].num = tree[num*2+1].num + tree[num*2].num;
    }
    if (tree[num].pd == '1'){
        tree[num].num = tree[num*2].num;
    }

    if (tree[num].pd == '0'){
        tree[num].num = tree[num*2+1].num;
    }
}

int change(int num, char s){
    if (s != '9'){
        tree[num].pd = s;

        if (tree[num].pd == '?') {
            tree[num].num = tree[num*2+1].num + tree[num*2].num;
        }
        if (tree[num].pd == '1'){
            tree[num].num = tree[num*2].num;
        }

        if (tree[num].pd == '0'){
            tree[num].num = tree[num*2+1].num;
        }
        if (num == 1) return tree[num].num;
        return change(num/2, '9');
    }

    if (tree[num].pd == '?') {
        tree[num].num = tree[num*2+1].num + tree[num*2].num;
    }
    if (tree[num].pd == '1'){
        tree[num].num = tree[num*2].num;
    }

    if (tree[num].pd == '0'){
        tree[num].num = tree[num*2+1].num;
    }

    if (num == 1) return tree[num].num;
    else return change(num/2, '9');
}


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    cin >> s;
    tot = strlen(s);
    build(1, tot+1, tot-1, 1);

    int q;
    cin >> q;
    for (int i = 1; i <= q; i++){
        int x;
        char s;
        cin >> x >> s;
        cout << change(tot-x+1, s) << endl;
    }
}