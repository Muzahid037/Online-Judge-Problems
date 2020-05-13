#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }
        vector<int>vt;
        for(int i=0; i<n; i++)
        {
            int cnt=0;
            for(int j=i; j>0; j--)
            {
                if(abs(x[j]-x[j-1])<3)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            for(int j=i; j<n-1; j++)
            {
                if(abs(x[j]-x[j+1])<3)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            vt.push_back(cnt);
        }
        sort(vt.begin(),vt.end());
        int sz=vt.size();
        cout<<vt[0]+1<<" "<<vt[sz-1]+1<<endl;
    }
    return 0;
}
