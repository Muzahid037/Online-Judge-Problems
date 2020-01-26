#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;

        if(s[s.length()-1]=='o'){cout<<"FILIPINO"<<endl;}
        else if(s[s.length()-1]=='u'){cout<<"JAPANESE"<<endl;}
        else {cout<<"KOREAN"<<endl;}
    }



  return 0;
}
