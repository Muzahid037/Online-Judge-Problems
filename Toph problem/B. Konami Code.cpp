#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;

    if(s.size()<10)
    {
        cout<<"0"<<endl;
        return 0;
    }

    int cnt=0;
    for(int i=0;i<s.size()-9;i++)
    {
        if(s[i]=='U' && s[i+1]=='U' && s[i+2]=='D' && s[i+3]=='D' && s[i+4]=='L' && s[i+5]=='R' && s[i+6]=='L' && s[i+7]=='R' && s[i+8]=='B' && s[i+9]=='A')
        {
            cnt++;
            i+=8;
        }
    }
    cout<<cnt<<endl;


    return 0;
}
