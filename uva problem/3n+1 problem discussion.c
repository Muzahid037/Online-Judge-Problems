#include<stdio.h>
int main()
{
    int i,count=1;
    scanf("%d",&i);
    while(i>1)
    {
        if(i%2==0)
        {
            i=i/2;
        }
        else{
            i=3*i+1;
        }
        count++;
        printf("%d\t",i);
    }
    printf("\n");
    printf("%d",count);
    return 0;
}
