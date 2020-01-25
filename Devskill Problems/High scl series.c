#include<stdio.h>
int main()
{
    int n,i,T,p,sum,m;
    scanf("%d",&T);
    for(m=1;m<=T;m++)
    {
      scanf("%d",&n);
      if(n<0)
      {
          break;
      }
      else
        sum=0;
    for(i=1;i<=n;i++)
        {
            p=i*i*i;
            sum=sum+p;
        }
        printf("Case %d: %d\n",m,sum);
    }
    return 0;
}
