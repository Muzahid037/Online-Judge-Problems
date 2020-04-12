#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a;
        cin>>n>>x;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int sum=0,ans=0;
        for(int i=0; i<n; i++)
        {
            sum+=v[i];
            int countCnsdrNo=i+1;
            if((sum/countCnsdrNo)>=x)
            {
               ans=countCnsdrNo;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
