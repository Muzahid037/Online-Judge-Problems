#include<bits/stdc++.h>
using namespace std;

bool plindrome(string s,int n)
{
    int st=0;
    int ed=n-1;

    while(st<ed){
        if(s[st]!=s[ed])
        {
            return false;
        }
    st++;
    ed--;
}
return true;
}

int main()
{
    string s,s1="",s2="";
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        if(i <n/2)
        {
            s1+=s[i];
        }
        else if(i>n/2)
        {
            s2+=s[i];
        }
    }
    //cout<<s1<<" "<<s2<<endl;
    int n1,n2;
    n1=s1.size();
    n2=s2.size();

    bool ck=plindrome(s,n);
    //cout<<ck<<endl;
    bool ck1=plindrome(s1,n1);
    //cout<<ck1<<endl;
    bool ck2=plindrome(s2,n2);
    //cout<<ck2<<endl;

    if(ck&&ck1&&ck2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
