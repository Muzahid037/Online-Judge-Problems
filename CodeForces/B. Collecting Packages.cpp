///Bismillahir Rahmanir Rahim
/**
 *    author: s0L0
 *
**/

#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        vector<pair<int,int> > p;
        int n;
        cin>>n;

        int x,y;
        for(int j=0; j<n; j++)
        {
            cin>>x>>y;

            p.push_back(make_pair(x,y));

            // cout<<p[j].first<<" "<<p[j].second<<endl;

        }

        sort(p.begin(),p.end());

        string s;

        for(int j=1; j<=p[0].first; j++)
        {
            s+='R';
        }
        for(int j=1; j<=p[0].second; j++)
        {
            s+='U';
        }

        int flag=0;
        for(int j=0; j<n-1; j++)
        {
            if(p[j].second > p[j+1].second || (p[j].first>p[j+1].first))
            {
                flag=1;
                break;
            }
            for(int k=1; k<=p[j+1].first-p[j].first; k++)
            {

                s+='R';
            }
            for(int k=1; k<=p[j+1].second-p[j].second; k++)
            {
                s+='U';
            }
        }

        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<"\n"<<s<<endl;

        }
    }



    return 0;
}
