
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int x[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(i>0)
        {
            if(x[i-1]>x[i])
            {
               // cout<<x[i-1]<<" "<<x[i]<<endl;
                int y=x[i-1]-x[i];
                x[i-1]-=y;
                x[i]+=y;
            }
        }
    }
    sort(x,x+n);

     for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<'\n';



    return 0;
}
