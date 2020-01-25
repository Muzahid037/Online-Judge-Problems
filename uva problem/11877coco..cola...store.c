#include<stdio.h>
int main()
{
    int n,cola,k,i;
    while(scanf("%d",&n)==1)
    {

        cola=0;
        if(n==0)
            break;
    while(n>=3)
    {
        n=n-3;
        cola++;
        n=n+1;
}
       if(n==2)
          {
    printf("%d",cola+1);

    }
    else
    printf("%d",cola);
    }
return 0;
}

