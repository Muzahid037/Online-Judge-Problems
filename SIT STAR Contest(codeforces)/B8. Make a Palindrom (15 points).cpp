#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
int a[26],pos[26];
int main()
{
    BOOST
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        int x=s[i]-'A';
        if(a[x]==0)
        {
            pos[x]=i;
            int ultaPos=n-pos[x]-1;
            if(s[pos[x]]==s[ultaPos]) continue;
            a[x]++;
        }
        else
        {
            int ultaPos=n-pos[x]-1;
            cout<<"ultaPos: "<<ultaPos<<" pos[x]: "<<pos[x]<<" i: "<<i<<endl;
            if(abs(ultaPos-i)%2==0)
            {
                char tmp;
                tmp=s[ultaPos];
                s[ultaPos]=s[i];
                s[i]=tmp;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
            a[x]--;
        }
    }
    cout<<s<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
int a[26],pos[26];
int main()
{
    BOOST
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        int x=s[i]-'A';
        if(a[x]==0)
        {
            pos[x]=i;
            a[x]++;
        }
        else
        {
            int ultaPos=n-pos[x]-1;
            cout<<"ultaPos: "<<ultaPos<<" pos[x]: "<<pos[x]<<" i: "<<i<<endl;
            if(abs(ultaPos-i)%2==0)
            {
                char tmp;
                tmp=s[ultaPos];
                s[ultaPos]=s[i];
                s[i]=tmp;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
            a[x]--;
        }
    }
    cout<<s<<endl;
    return 0;
}


/*
 string ans(n,'?');
    ///cout<<ans<<endl;

    for(int i=0; i<n; i++)
     {
         int x=s[i]-'A';
         ara[x]++;
     }
     for(int i=0; i<26; i++)
     {
         //cout<<ara[i]<<endl;
         if(ara[i]%2==1) cnt++;
         if(cnt>1)
         {
             cout<<"NO"<<endl;
             return 0;
         }
     }

*/
