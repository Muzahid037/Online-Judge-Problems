///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,x;
    cin>>n;

    int cnt25=0,cnt50=0,cnt100=0,flag=0;

    for(int i=0; i<n; i++)
    {
        cin>>x;

        if(x==25)
        {
            cnt25++;
        }
        else if(x==50 && cnt25>0)
        {
            cnt50++;
            cnt25--;
        }

        else if(x==100 && cnt50>0 && cnt25>0)
        {
            cnt100++;
            cnt50--;
            cnt25--;
        }
        else if(x==100 && cnt50==0 && cnt25>2)
        {
            cnt100++;
            cnt25-=3;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }




    return 0;
}
