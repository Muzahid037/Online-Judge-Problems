#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;

    int ans=0;
    for(int i=a;i<=b;i++)
    {
        int div=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0){
                div++;
            }
        }
        if(div%2!=0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;



    return 0;
}
