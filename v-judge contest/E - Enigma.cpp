#include<bits/stdc++.h>
using namespace std;
int main()
{
    string e,c;
    cin>>e>>c;
    int el=e.size();
    int cl=c.size();
    //cout<<"el:"<<el<<" cl:"<<cl<<endl;
    int cnt=0;
    int ans=0;
    for(int i=0; i<el-cl+1; i++)
    {
        for(int j=0; j<cl; j++)
        {
           // cout<<"i+j:"<<i+j<<" "<<e[i+j]<<" j:"<<j<<" "<<c[j]<<endl;
            if(e[i+j]!=c[j])
            {
                cnt++;
                if(cnt==cl)
                {
                    ans++;
                    cnt=0;
                }
                continue;
            }
            else
            {
                cnt=0;
                j=i+cl-1;
            }
        }
       // cout<<"----------------------"<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
