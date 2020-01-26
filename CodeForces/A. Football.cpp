#include<iostream>
using namespace std;
int main()
{
    string a;
    int c0=0,c1=0;
    cin>>a;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='0')
            {
                c0++;
        if(c0>=7)
            {
                break;
        }
        }
        else
        {
            c0=0;
        }
        if(a[i]=='1')
            {
                c1++;
        if(c1>=7)
            {
                break;
        }
        }
        else
        {
            c1=0;
        }
    }
    if(c0>=7||c1>=7){cout<<"YES"<<endl;}
    else
    {
        cout<<"NO"<<endl;
        }
}
