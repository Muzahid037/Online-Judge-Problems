#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,ab;
    cin>>a>>b>>ab;
    a+=b;
    sort(a.begin(),a.end());
    sort(ab.begin(),ab.end());
    if(a==ab)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    string a,b,ab;
    cin>>a>>b>>ab;
    int asz=a.size();
    int bsz=b.size();
    int absz=ab.size();
    if((asz+bsz)!=absz)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<asz; i++)
    {
        mp[a[i]]++;
    }
    for(int i=0; i<bsz; i++)
    {
        mp[b[i]]++;
    }
    for(int i=0; i<absz; i++)
    {
        mp[ab[i]]--;
    }
    for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++)
    {
        if(it->second!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
*/

///-----------------------------------------------------------------///

/*
#include<bits/stdc++.h>
using namespace std;
char alp[]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
map<char,int>mp1,mp2;
int main()
{
    string a,b,ab;
    cin>>a>>b>>ab;
    int asz=a.size();
    int bsz=b.size();
    int absz=ab.size();
    if((asz+bsz)!=absz)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<asz; i++)
    {
        mp1[a[i]]++;
    }
    for(int i=0; i<bsz; i++)
    {
        mp1[b[i]]++;
    }
    for(int i=0; i<absz; i++)
    {
        mp2[ab[i]]++;
    }
    int flag=1;
    for(int i=0; i<26; i++)
    {
        //cout<<"alp[i]: "<<alp[i]<<" mp1[alp[i]]: "<<mp1[alp[i]]<<" mp2[alp[i]]: "<<mp2[alp[i]]<<endl;
        if(mp1[alp[i]]!=mp2[alp[i]])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
*/

