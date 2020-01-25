#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>10||b>10||t>125){continue;}
        cout<<"Case "<<i+1<<": "<<a+b<<endl;
    }
    return 0;
}

