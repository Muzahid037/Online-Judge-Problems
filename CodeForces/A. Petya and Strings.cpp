#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int ln=a.size();
    int aValue=0,bValue=0;
    for(int i=0; i<ln; i++)
    {
        if(a[i]<97)
        {
            a[i]+=32;
        }
        if(b[i]<97)
        {
            b[i]+=32;
        }
        aValue+=(a[i]-'a');
        bValue+=(b[i]-'a');
        if(aValue>bValue)
        {
            cout<<"1"<<endl;
            return 0;
        }
        else if(aValue<bValue)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    // cout<<aValue<<" "<<bValue<<endl;
    cout<<"0"<<endl;

    return 0;
}


