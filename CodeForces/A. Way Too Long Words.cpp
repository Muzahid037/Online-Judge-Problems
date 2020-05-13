#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a;
        if(a.length()>10)
        {
            cout<<a[0]<<a.length()-2<<a[a.length()-1]<<endl;
        }

        else
        {
            cout<<a<<endl;
        }
    }
    return 0;
}
