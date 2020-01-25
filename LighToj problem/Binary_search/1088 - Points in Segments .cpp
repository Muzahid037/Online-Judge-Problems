#include<bits/stdc++.h>
using namespace std;



int p[100005];

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i <t; i++)
    {

        int n, q;

        scanf("%d %d", &n, &q);

        for(int j = 0; j < n; ++j)
            scanf("%d", p+j);

        printf("Case %d:\n", i+1);

        int a, b;

        while(q--)
        {
            scanf("%d %d", &a, &b);

            int* lowa = lower_bound(p, p+n, a);
            int* upb = upper_bound(p, p+n, b);

            printf("%d\n", upb-lowa);
        }
    }

    return 0;
}
