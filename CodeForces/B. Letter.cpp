#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<char,ll>cnt;
int main()
{

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
//    cout<<s1<<endl;
//    cout<<s2<<endl;
    ll ln1=s1.size();
    ll ln2=s2.size();
//    cout<<ln1<<" "<<ln2<<endl;
    for(ll i=0; i<ln1; i++)
    {
        if(s1[i]!=' ')
        {
            cnt[s1[i]]++;
        }
    }
    for(ll i=0; i<ln2; i++)
    {
        if(s2[i]!=' ')
        {
            cnt[s2[i]]--;
        }
        if(cnt[s2[i]]<0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
cnt.clear();
    return 0;
}
