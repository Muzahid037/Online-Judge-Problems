#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll ln=s.size();
        char c=s[ln-1];
        if(c=='0')
        {
            cout<<"0"<<endl;
        }
        else if(c=='1' || c=='9')
        {
            cout<<"1"<<endl;
        }
        else if(c=='2' || c=='8')
        {
            cout<<"4"<<endl;
        }
        else if(c=='3')
        {
            cout<<"9"<<endl;
        }
        else if(c=='4' || c=='6')
        {
            cout<<"6"<<endl;
        }
        else if(c=='5')
        {
            cout<<"5"<<endl;
        }
        else if(c=='7')
        {
            cout<<"9"<<endl;
        }
    }



    return 0;
}
