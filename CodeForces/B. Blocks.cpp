#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,xw,xb,pos[205];
    cin>>n;

    string s;
    cin>>s;

    int len=s.length();

    int j=0;
    for(int i=1; i<len-1; i++)
    {
        if(s[i-1]!=s[i])
        {
            pos[j]=i;
            j++;
          if(s[i]='W'){s[i]='B';}
          else{s[i]='W'; }

           if(s[i+1]='W'){s[i+1]='B';}
          else{s[i+1]='W';}

        }
    }
      cout<<s<<endl;

     for(int i=len-2; i>1; i--)
    {
        if(s[i+1]!=s[i])
        {
            pos[j++]=i;
            j++;
           if(s[i]='W'){s[i]='B';}
          else{s[i]='W';}

           if(s[i-1]='W'){s[i-1]='B';}
           else{s[i-1]='W';}

        }
    }

    cout<<s<<endl;
    cout<<pos[0]<<pos[1]<<pos[2]<<pos[3]<<endl;

    return 0;
}
