#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int idx1,idx2;
        idx2=n;
        idx1=n-1;
        for(int i=1; i<k; i++)
        {
            if(idx1+1==idx2)
            {
                idx1--;
                idx2=n;
            }
            else
            {
                idx2--;
            }
        }
        //cout<<idx1<<" "<<idx2<<endl;
        string s="";
        for(int i=1; i<=n; i++)
        {
            if(i==idx1 || i==idx2)
            {
                s+="b";
            }
            else
            {
                s+="a";
            }
        }
        cout<<s<<endl;
    }



    return 0;
}
