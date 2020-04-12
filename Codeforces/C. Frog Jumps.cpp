#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int mx=0;
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='L')
            {
                cnt++;
                //cout<<cnt<<endl;

            }
            else
            {
                mx=max(mx,cnt);
                cnt=0;
            }
        }
         mx=max(mx,cnt);

        cout<<mx+1<<endl;



    }

    return 0;
}
