#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        int x;
        vector<int>a;
        for(int i=0; i<5; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        int p;
        cin>>p;
        for(int i=0; i<5; i++)
        {
            a[i]=a[i]*p;
        }
        int flag=0;
        for(int i=0; i<5; i++)
        {
            if(a[i]<=24)
            {
                continue;
            }
            else if(a[i]>24)
            {
                int tmp=a[i]-24;
                //cout<<"tmp: "<<tmp<<endl;
                if(i>0 && a[i-1]<24 && (24-a[i-1])>=tmp)
                {
                    int tmp2=24-a[i-1];
                    //cout<<"tmp2: "<<tmp2<<endl;
                    a[i]-=tmp2;
                    if(a[i]<0) a[i]=0;
                }
                else if(i<4 && a[i+1]<24 && (24-a[i+1])>=tmp)
                {
                    int tmp2=a[i]-24;
                    //cout<<"tmp2: "<<tmp2<<endl;
                    a[i+1]+=tmp2;
                }
                else
                {
                    flag=1;
                    break;
                }

            }
            //cout<<"-------------------"<<endl;
        }
        // cout<<extra<<endl;
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return  0;
}
