#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ct1=0,ct2=0;
    char s[100];
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='-'){ct1++;}
                else if(s[i]=='o'){ct2++;}
    }
    if(ct2==0||ct2==1||(ct1%ct2==0&&ct2>1)){cout<<"YES"<<endl;}
    else
        {cout<<"NO"<<endl;}
        return 0;
}
