#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    BOOST

    int n;
    cin>>n;
    string page="";
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        int tmp=i;
        while(tmp!=0)
        {
            if(tmp%10==1)
            {
                cnt++;
            }
            tmp/=10;
        }
    }
    //cout<<page<<endl;
    cout<<cnt<<endl;
    return 0;
}




