#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        // cout<<s[1]<<endl;

        int sum=0;
        string z="";

//     sum=(s[0]-'0');
//     z+=s[0];
        int flag=0;
        for(int j=0; j<s.length(); j++)
        {
            sum+=(s[j]-'0');
            z+=s[j];

            //cout<<s[i]<<endl;
            if(sum%2==0 && (s[j]-'0')%2!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<z<<endl;
        }
    }


    return 0;
}
