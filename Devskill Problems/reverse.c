#include<stdio.h>
#include<ctype.h>
int main()
{
    int t,i,len,j,k,m;
    char str[1010],rev[1010];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        getchar();
        scanf("%[^\n]s",str);
        j=0;
        while(str[j]!='\0')
        {
            j++;
        }
        k=j-1;
        m=0;
        while(k>=0)
        {
            rev[m]=str[k];
            m++;
            k--;
        }
        rev[m]='\0';
        printf("%s\n",rev);
    }
    return 0;
}
