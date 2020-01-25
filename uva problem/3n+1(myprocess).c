#include<stdio.h>
int main()
{
    long long i,j,ct,x,ct1,t;
    while(scanf("%lld%lld",&i,&j)!=EOF)
    {
    printf("%lld %lld ",i,j);
    if(j>i)
    {
        t=i;
        i=j;
        j=t;
    }
    x=i;
    ct1=1;
    while(x>=j)
    {
        i=x;
        ct=1;
        while(i>1)
        {
        if(i%2==0)
        {
            i=i/2;
        }
        else{
            i=3*i+1;
        }
        ct++;
    }
    x--;
    if(ct>ct1)
    ct1=ct;
    }
    printf("%d\n",ct1);
    }
    return 0;
}
