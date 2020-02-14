#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
   cin>>t;

   ll n;
   for(ll i=0;i<t;i++)
   {
       cin>>n;

       ll two;
       if(n%2==1)
       {
           two=n/2;
           two--;
           cout<<"7";
           for(ll j=0;j<two;j++)
           {
               cout<<"1";
           }
           cout<<'\n';
       }
       else
       {
           two=n/2;
            for(ll j=0;j<two;j++)
           {
               cout<<"1";
           }
           cout<<'\n';
       }

   }

    return 0;
}
