#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string s,c;
    for(int i=0;i<t;i++)
    {
        cin>>s>>c;

        int x=0;
        for(int j=1;j<s.length();j++)
        {
            if(s[i-1]>s[i]){x=i;}
        }
    }



    return 0;
}
