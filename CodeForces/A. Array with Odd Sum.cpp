#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int x,odd=0,even=0;

        for(int j=0;j<n;j++)
        {
            cin>>x;

           if(x%2!=0){odd++;}
           else
           {
              even++;
           }
        }
        if((odd==n && n%2!=0) || (odd>0 && even>0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }




    }



    return 0;
}
