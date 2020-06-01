#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int MX=200009;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ln=s.size();
        int pos1=-1,pos2=-1,pos3=-1,ansLength=MX;
        for(int i=0; i<ln; i++)
        {
            if(s[i]=='1') pos1=i+1;
            else if(s[i]=='2') pos2=i+1;
            else if(s[i]=='3') pos3=i+1;
            if(pos1!=-1 && pos2!=-1 && pos3!=-1)
            {
                int tmpMinPos=min(pos1,min(pos2,pos3));
                int tmpMaxPos=max(pos1,max(pos2,pos3));
                ansLength=min(ansLength,tmpMaxPos-tmpMinPos+1);
            }
        }
        if(ansLength==MX) cout<<"0"<<endl;
        else cout<<ansLength<<endl;
    }
    return 0;
}
