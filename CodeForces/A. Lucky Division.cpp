///"Bismillahir Rahmanir Rahim"

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int x=n;

   if(x%4==0 || x%7==0 || x%44==0 || x%77==0 || x%47==0 || x%74==0 || x%444==0 || x%447==0 || x%474==0 || x%477==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }

while(n!=0)
{
    if(n%10==4 || n%10==7){
    n=n/10;
    continue;
    }
    else
        {
            cout<<"NO"<<endl;
    return 0;
        }
}

cout<<"YES"<<endl;



return 0;
}
