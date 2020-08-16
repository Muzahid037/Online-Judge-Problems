///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void func(int *ans,int *a,int *b,int d)
{
    int cnta=0,cntb=0;
    while(*a%d==0){cnta++; *a/=d;}
    while(*b%d==0){cntb++; *b/=d;}
    *ans+=abs(cnta-cntb);
}
int main()
{
    Boost();
    int a,b,ans=0;
    cin>>a>>b;
    func(&ans,&a,&b,2);
    func(&ans,&a,&b,3);
    func(&ans,&a,&b,5);
    if(a!=b) cout<<"-1"<<endl;
    else cout<<ans<<endl;
    return 0;
}

///Another a/c sol:

/*

///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int func(int* dividend,int divisor)
{
    int cnt=0;
    while(*dividend%divisor==0)
    {
        cnt++;
        *dividend/=divisor;
    }
    return cnt;
}
int main()
{
    Boost();
    int a,b;
    cin>>a>>b;
    int a2=func(&a,2);
    int a3=func(&a,3);
    int a5=func(&a,5);
    int b2=func(&b,2);
    int b3=func(&b,3);
    int b5=func(&b,5);
    if(a!=b) cout<<"-1"<<endl;
    else cout<<abs(a2-b2)+abs(a3-b3)+abs(a5-b5)<<endl;
    return 0;
}

*/
