#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[5],buy=0;
    for(int i=1; i<=4; i++)
    {
        cin>>s[i];
        for(int j=1; j<i; j++)
        {
            if(s[i]==s[j])
            {
                buy++;
                break;
            }
        }
    }
    cout<<buy<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
set<int>st;
int main()
{
    int s,buy=0;
    for(int i=1; i<=4; i++)
    {
        cin>>s;
        st.insert(s);
        if(mp[s]==1)
        {
            buy++;
        }
        else
        {
            mp[s]=1;
        }
    }
    //cout<<buy<<endl;
    ///or
    cout<<4-st.size()<<endl;
    return 0;
}

*/

