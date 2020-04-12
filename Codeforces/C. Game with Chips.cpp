#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0; i<k; i++)
    {
        int xi,yi;
        cin>>xi>>yi;
    }
    for(int i=0; i<k; i++)
    {
        int xd,yd;
        cin>>xd>>yd;
    }
    string s="";
    for(int i=0; i<m-1; i++)
    {
        s+="L";
    }
    for(int i=0; i<n-1; i++)
    {
        s+="D";
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(i%2==0)
            {
                s+="U";
            }
            else
            {
                s+="D";
            }
        }
        if(i<m-1)
        {
            s+="R";
        }
    }
    cout<<s.size()<<"\n"<<s<<endl;

    return 0;
}
