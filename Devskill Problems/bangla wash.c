#include<stdio.h>
int main()
{
    int a,b,c,d,t,i,j,count;
    char s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        count=0;
     for(j=1;j<=2;j++){
       scanf("%d%d%d%d",&a,&b,&c,&d);
       if((a+b)>(c+d)){
        count++;
       }
        }
       if(count==2)
       {
           printf("Banglawash\n");
       }
       else
        printf("Miss\n");

    }
    return 0;
}
