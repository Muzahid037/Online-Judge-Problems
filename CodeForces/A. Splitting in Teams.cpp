#include<iostream>
using namespace std;
int main()
{
    long n;
    int ai,c1,c2;
    cin>>n;
    c1=0;
    c2=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ai;
        if(ai<1||ai>2){return 0;}
        else if(ai==2){c2++;}
        else
        {
            c1++;
        }
    }
    if(c1>=c2&&c2!=0){cout<<c2<<endl;}
    else if(c2==0){cout<<c1/3<<endl;}
    else
    {
        cout<<"0"<<endl;
    }
}
