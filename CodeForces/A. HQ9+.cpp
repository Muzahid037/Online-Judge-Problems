#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

 return 0;
}
/*
#include<iostream>
using namespace std;
int main()
{
    char c[100];
    cin>>c;
    for(int i=0; c[i]!='\0'; i++)
    {
        if(c[i]=='H')
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(c[i]=='Q')
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(c[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
*/
