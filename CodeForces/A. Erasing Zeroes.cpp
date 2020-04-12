#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ln=s.size();
        int eraseZero=0,posOfOne=-1;
        for(int i=0;i<ln;i++)
        {
            if(s[i]=='1')
            {
//                   if(posOfOne==-1)
//                    {
//                        posOfOne=i;
//                    }
                    if(posOfOne!=-1)
                    {
                        eraseZero+=(i-posOfOne-1);
//                        posOfOne=i;
                    }
                     posOfOne=i;
            }
        }
       cout<<eraseZero<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ln=s.size();
        int eraseZero=0;
        int fstOneidx=0;
        int lastOneidx=ln-1;
        while(s[fstOneidx]=='0')
        {
            fstOneidx++;
        }
        while(s[lastOneidx]=='0')
        {
            lastOneidx--;
        }
        //cout<<"fstOneidx: "<<fstOneidx<<" lastOneidx: "<<lastOneidx<<endl;
        for(int i=fstOneidx+1;i<=lastOneidx-1;i++)
        {
            if(s[i]=='0')
            {
                eraseZero++;
            }
        }
        cout<<eraseZero<<endl;
    }
    return 0;
}
*/
