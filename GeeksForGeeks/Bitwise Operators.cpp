#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n,int k)
{
    int maxAnd=0,maxOr=0,maxXor=0;
   for(int i=1;i<=n;i++)
   {
       for(int j=i+1;j<=n;j++)
       {
           int x=i&j;
           int y=i|j;
           int z=i^j;
           if(maxAnd<x && x<k)
           {
               maxAnd=x;
           }
            if(maxOr<y && y<k)
           {
               maxOr=y;
           }
            if(maxXor<z && z<k)
           {
               maxXor=z;
           }
       }
   }
   printf("%d\n",maxAnd);
   printf("%d\n",maxOr);
   printf("%d\n",maxXor);
}

int main()
{
    int n,k;
    //cin>>n>>k;
    scanf("%d %d",&n,&k);
    calculate_the_maximum(n, k);

    return 0;
}
