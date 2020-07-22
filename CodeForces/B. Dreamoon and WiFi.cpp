///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),dest=0,temp=0,plusOrMinus=0;
    for(int i=0; i<n; i++) dest+=(s1[i]=='+'?1:-1);
    for(int i=0; i<n; i++)
    {
        if(s2[i]=='+') temp++;
        else if(s2[i]=='-') temp--;
        else plusOrMinus++;
    }
    int bakiDis=dest-temp,pos=0,all;
    for(int i=0; i<(1<<plusOrMinus); i++)
    {
        int d=i,p=0;
        for(int j=0; j<plusOrMinus; j++)    ///j==bit number
        {
            if(d%2==1) p++;  ///1<<j it makes a number only j-th bit set
            else p--;
            d/=2;
        }
        if(p==bakiDis) pos++;
    }
    all=(1<<plusOrMinus);   ///all=2^plusOrMinus
    cout<<fixed<<setprecision(12)<<(1.0*pos)/(1.0*all)<<endl;
    return 0;
}
