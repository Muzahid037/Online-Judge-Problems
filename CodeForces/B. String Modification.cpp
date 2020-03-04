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
        string s;
        cin>>s;

        string s1=s;
        cout<<s1<<endl;

        int pos;
        for(int k=0;k<n;k++){
             char c=s[0];
                for(int j=0;j<n-1;j++)
                {
                    s[j]=s[j+1];
                }
                s[n-1]=c;
           // cout<<s<<endl;
            if(s1>s)
            {
                pos=k;
                break;
            }
        }

       cout<<s<<'\n'<<pos<<endl;


//       string s1="qwerty";
//       string s2="wertyq";
//       if(s1<s2)
//       {
//           cout<<"-1"<<endl;
//       }

    }


    return 0;
}

