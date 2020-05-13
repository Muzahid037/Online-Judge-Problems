#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ln=s.size();
    int cntOdd=0;
    map<char,int>mp;
    for(int i=0; i<ln; i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]%2==1) cntOdd++;
        else cntOdd--;
    }
    if(cntOdd!=0)
    {
        cntOdd--;
    }
    if(cntOdd & 1) cout<<"Second"<<endl;  ///(cntOdd & 1) or cntOdd%2==1
    else cout<<"First"<<endl;
    return 0;
}
