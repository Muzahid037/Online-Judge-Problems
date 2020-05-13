#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
char last(string s)
{
    return s[s.size()-1];
}
char first(string s)
{
    return s[0];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string plyd;
    cin>>plyd;
    char lst=last(plyd);
    int n;
    cin>>n;
    string avlbl[n+5];
    vector<string>ans;
    int flag=0;
    int lastPosIndex=-1;
    for(int i=0; i<n; i++)
    {
        cin>>avlbl[i];
        if(lst==first(avlbl[i]))
        {
            flag=1;
            ans.push_back(avlbl[i]);
        }
    }
    if(flag==0)
    {
        cout<<"?"<<endl;
        return 0;
    }
    for(vector<string>::iterator it=ans.begin(); it!=ans.end(); it++)
    {
        string tmp=*it;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(tmp!=avlbl[i] && last(tmp)==first(avlbl[i]))
            {
                cnt++;
            }
        }
        if(cnt==0){cout<<tmp<<"!"<<endl;return 0;}
    }
    cout<<ans[0]<<endl;
    return 0;
}
