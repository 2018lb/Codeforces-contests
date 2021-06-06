#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iomanip>
using namespace std;

struct poi{
    int last, next, val;
}que[100100], no[100100];

void del(int k){
    que[que[k].next].last  = que[k].last;
    que[que[k].last].next  = que[k].next;
}

void del_(int k){
    no[no[k].next].last  = no[k].last;
    no[no[k].last].next  = no[k].next;
}

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int ans[100100], num = 0;

int main(void){
    int t;
    scanf("%d", &t);
    while (t--){
        memset(que,0,sizeof (que));
        memset(no,0,sizeof (no));
        num = 0;
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &que[i].val);
            que[i].last = i-1;
            que[i].next = i+1;
        }

        if (n == 1)  {
            if (que[1].val == 1) printf("1 1\n");
            else printf("0\n");
            continue;
        }

        que[1].last = n;
        que[n].next = 1;

        int num_no=0;
        for (int i = 1; i <= n; i++){
            if (gcd(que[i].val, que[que[i].next].val) == 1) {
                no[num_no].val = i;
                no[num_no].last = num_no-1;
                no[num_no].next = num_no+1;
                num_no++;

            }
        }

        no[0].last = num_no-1;
        no[num_no-1].next = 0;


        int i = 0, last = -1, sum = n, count = 0;

        while(num_no){
            ans[num++] = que[no[i].val].next;

            if (no[no[i].next].val == que[no[i].val].next){
                del_(no[i].next);
                num_no--;
            }

            del(que[no[i].val].next);
            if (gcd(que[no[i].val].val, que[que[no[i].val].next].val) != 1){
                del_(i);
                num_no--;
            }
            if (que[no[i].val].next == no[i].val){
                if (que[no[i].val].val == 1) ans[num++] = no[i].val;
                break;
            }
            i = no[i].next;
        }

        printf("%d ", num);
        for (int i = 0; i < num; i++){
            printf("%d ", ans[i]);
        }
       printf("\n");
    }
    return 0;
}
