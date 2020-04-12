#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int ln=s.size();
    int hr=(s[0]-'0')*10+(s[1]-'0');
    int mn=(s[3]-'0')*10+(s[4]-'0');
    int sec=(s[6]-'0')*10+(s[7]-'0');
    if(s[8]=='P' && hr!=12)
    {
        hr+=12;
    }
    else if(s[8]=='A' && hr==12)
    {
        hr=0;
    }
    if((int)hr/10==0)
    {
        cout<<"0"<<hr;
    }
    else
    {
        cout<<hr;
    }
    if((int)mn/10==0)
    {
        cout<<":0"<<mn;
    }
    else
    {
        cout<<":"<<mn;
    }
     if((int)sec/10==0)
    {
        cout<<":0"<<sec;
    }
    else
    {
        cout<<":"<<sec;
    }

   /// printf("%02d:%02d:%02d\n", hr, mn, sec);
   // cout << hr << ":" << mn << ":" << sec << endl;

    return 0;
}
