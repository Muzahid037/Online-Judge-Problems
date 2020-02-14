#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s,c;
        cin>>s>>c;
 if(s<c)
         {
             cout<<s<<endl;
             continue;
         }
        string ss=s;
        sort(ss.begin(),ss.end());
       // cout<<ss<<endl;

        int pos,swap_idx=-1;
        char ch;
        for(int j=0; j<s.size(); j++)
        {
          //  cout<<ss[i]<<" "<<s[i]<<endl;
            if(s[j]!=ss[j]){
                    pos=j;
                    ch=s[j];
                   // cout<<ch<<endl;
                for(int i=j+1; i<s.size(); i++)
                {
                    if(s[i]<=ch)
                    {
                        ch=s[i];
                        swap_idx=i;
                    }
                }
                break;
            }
        }
        if(swap_idx>0)
        {
            swap(s[swap_idx],s[pos]);
        }
        if(s<c)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"---"<<endl;
        }
    }

    return 0;
}
