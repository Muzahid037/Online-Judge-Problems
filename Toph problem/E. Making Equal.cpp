#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<char,int>cnt;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ln=s.size();
        int mx=0;
        char mn='z';
        for(int i=0; i<ln; i++)
        {
            cnt[s[i]]++;
            //cout<<"mx : "<<mx<<" cnt[s[i]: "<<cnt[s[i]]<<" s[i]: "<<s[i]<<" "<<"mn: "<<mn<<endl;
            if( mx<cnt[s[i]] || (mx==cnt[s[i]] && mn>s[i]) )
            {
                mx=cnt[s[i]];
                mn=s[i];
            }
        }
        cout<<ln-mx<<endl;
        for(int i=0; i<ln; i++)
        {
            cout<<mn;
        }
        cout<<"\n";
        cnt.clear();
    }



    return 0;
}
