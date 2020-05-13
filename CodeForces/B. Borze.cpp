#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ssz=s.size();
    string ans="";
    for(int i=0; i<ssz;)
    {
        if(s[i]=='-' && s[i+1]=='-')
        {
            ans+="2";
            i+=2;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            ans+="1";
            i+=2;
        }
        else
        {
            ans+="0";
            i++;
        }
    }
    cout<<ans<<endl;

    return 0;
}


