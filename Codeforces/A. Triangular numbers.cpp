#include<bits/stdc++.h>
using namespace std;

int tn[35];

int func()
{
    for(int i=1; i<=32; i++)
    {
        tn[i]=(i*(i+1))/2;
    }
}

int main()
{
    func();
    int n;
    cin>>n;
    int flag=0;
    for(int i=1; i<=32; i++)
    {
        if(tn[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
