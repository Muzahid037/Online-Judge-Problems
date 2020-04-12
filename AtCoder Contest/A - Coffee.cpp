/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    if(s[2]!=s[3] || s[4]!=s[5] || s.size()<6)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }

}
