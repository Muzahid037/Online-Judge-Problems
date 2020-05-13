#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string s;
    cin>>s;
    int ln=s.size();
    int cnt1=0,cnt4=0;
    for(int i=0; i<ln; i++)
    {
        //cout<<cnt4<<" ";
        if(s[i]=='1')
        {
            cnt1=1;
            cnt4=0;
        }
        else if( s[i]=='4' && (cnt1==1 && cnt4<2) )
        {
            //cout<<cnt4<<endl;
            cnt4++;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}

///-------------------------------------///
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool chk(char a,char b,char c)
{
    if(a=='1' && b=='4' && c=='4')
    {
        return true;
    }
    else return false;
}
bool chk(char a,char b)
{
    if(a=='1' && b=='4')
    {
        return true;
    }
    else return false;
}
bool chk(char a)
{
    if(a=='1')
    {
        return true;
    }
    else return false;
}

int main()
{
    string s;
    cin>>s;
    int ln=s.size();
    for(int i=0; i<ln;)
    {
        if( chk(s[i],s[i+1],s[i+2]) && i+2<ln)
        {
            i+=3;
        }
        else if(chk(s[i],s[i+1]) && i+1<ln)
        {
            i+=2;
        }
        else if(chk(s[i]) && i<ln)
        {
            i+=1;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
*/

///-------------------------------------------///
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll num;
    cin>>num;
    while(num!=0)
    {
        ll a=num%1000;
        ll b=num%100;
        ll c=num%10;
        //cout<<a<<" "<<b<<" "<<c<<endl;
        if(a==144)
        {
            num/=1000;
        }
        else if(b==14)
        {
            num/=100;
        }
        else if(c==1)
        {
            num/=10;
        }
        else
        {
            break;
        }
        //cout<<a<<" "<<b<<" "<<c<<endl;
        //cout<<endl;
    }
    if(num==0)
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

///----------------------------------///

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin>>s;
    ll len=s.size();
    int flag=0;
    int mxCnt4=0,cnt4=0;
    for(ll i=0; i<len; i++)
    {
        if((s[i]!='1' && s[i]!='4') || (i==0 && s[i]=='4'))
        {
            flag=1;
            break;
        }
        if(s[i]=='4')
        {
            cnt4++;
        }
        else
        {
            mxCnt4=max(mxCnt4,cnt4);
            cnt4=0;
        }
    }
    mxCnt4=max(mxCnt4,cnt4);
    //cout<<mxCnt4<<endl;
    if(flag==1 || mxCnt4>2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
*/
