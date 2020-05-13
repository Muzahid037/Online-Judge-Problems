///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int up=0,low=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    //cout<<up<<" "<<low<<endl;
    if(up>low)
    {

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=(s[i]-'a')+'A';
            }
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=(s[i]-'A')+'a';
            }
        }
    }
    cout<<s<<endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int up=0,low=0;

    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    if(up>low)
    {

        for(int i=0; i<s.size(); i++)
        {
            if(islower(s[i]))
            {
                cout<<char(s[i]-32);
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<'\n';
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(isupper(s[i]))
            {
                cout<<char(s[i]+32);
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<'\n';
    }

    return 0;
}
*/
