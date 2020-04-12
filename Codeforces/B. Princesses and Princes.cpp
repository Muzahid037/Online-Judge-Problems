#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<int,int>mp;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>ans;
        int n,idx,cntk=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            if(k==0){ans.push_back(i+1);continue;}

            vector<int>v;
            for(int j=0;j<k;j++)
            {
                int y;
                cin>>y;
                v.push_back(y);
            }
            sort(v.begin(),v.end());
//            for(vector<int>::iterator it=v.begin();it!=v.end();it++)
//            {
//                cout<<*it<<" ";
//            }
//            cout<<endl;
            int m=0;
            while(mp[v[m]]==1)
            {
               m++;
            }

           // cout<<m<<" "<<v.size()<<endl;
            if(m<v.size()){mp[v[m]]=1;}
            else{
                ans.push_back(i+1);
            }
           // cout<<mp[v[m]]<<" "<<v[m]<<endl;
        }
        if(ans.empty())
        {
            cout<<"OPTIMAL"<<endl;
        }
        else{
        for(int p=1;p<=n;p++)
        {
            if(mp[p]==0)
            {
                cout<<"IMPROVE"<<'\n'<<ans[0]<<" "<<p<<endl;
                break;
            }
        }
        }

        mp.clear();
    }



 return 0;
}
