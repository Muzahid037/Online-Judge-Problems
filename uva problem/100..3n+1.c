#include<stdio.h>
int main()
{
long long i,j,m,x,count,cnt,t;
while(scanf("%lld%lld",&i,&j)!=EOF)
{
    printf("%lld %lld ",i,j);
   if(j>i)
   {
       t=j;
       j=i;
       i=t;
   }
   //m=i;
   x=i;
   count=1;
   while(x>=i)
   {
       i=x;
       cnt=1;
       while(i>1)
       {
           if(i%2==0)
           {
               i=i/2;
           }
           else
           {
               i=3*i+1;
           }
           cnt++;
       }
       if(count<cnt)
        count=cnt;
       x--;
   }
   printf("%lld\n",count);
   }
return 0;
}
