#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,mx,mn,amz=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(i==0)
        {
            mx=x;
            mn=x;
        }
        else
        {
            if(x>mx)
            {
                amz++;
                mx=x;
            }
            else if(x<mn)
            {
                amz++;
                mn=x;
            }
        }

    }

    cout<<amz<<endl;

    return 0;
}


