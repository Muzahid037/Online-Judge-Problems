#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    string s,ans;
    map<string,int>mp;
    int mx=0;
    while(n--)
    {
        cin>>s;
        mp[s]++;
        if(mx<mp[s]){ mx=mp[s]; ans=s;}
    }
    cout<<ans<<endl;
    return 0;
}


///----------------------------------///
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    string s;
    map<string,int>mp;
    set<string>str;
    while(n--)
    {
        cin>>s;
        str.insert(s);
        mp[s]++;
    }
    string ans=s;
    for(set<string>::iterator it=str.begin(); it!=str.end(); it++)
    {
        if(mp[*it]>mp[s])
        {
            ans=*it;
        }
    }
    cout<<ans<<endl;

    return 0;
}
*/
