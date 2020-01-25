#include<iostream>
using namespace std;
int main()
{
    int t;
    long s1,s2,s3;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>s1>>s2>>s3;
        if(s1>s2&&s1>s3&&s3>s2){cout<<s3<<endl;}
        else if(s1>s2&&s1<s3&&s3<s2){cout<<s2<<endl;}
        else
            {
                cout<<s1<<endl;
            }
       // else if(s3>s1&&s3<s2&&s){cout<<s3<<endl;}
    }
    return 0;
}
