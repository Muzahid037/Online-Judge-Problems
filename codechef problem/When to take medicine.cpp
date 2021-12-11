#include<bits/stdc++.h>
using namespace std;

int main()

{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int y,m,d,ct=0;
        char c;
        cin>>y>>c>>m>>c>>d;
        if(m==2 && (y%4==0 || (y%100==0 && y%400==0)))
        {
            for(int i=d;i<=29;i+=2){ct++;}
        }
        else if(m%2!=0)
        {
            for(int i=d;i<=31;i+=2){ct++;}
            //cout<<((31-d)/2)+1<<endl;
        }
        else if(m%2==0 && (y%4!=0 || (y%100==0 && y%400!=0)))
        {
           // cout<<((28-d)/2)+1<<endl;
           for(int i=d;i<=28;i+=2){ct++;}
        }
        else
        {
            //cout<<((30-d)/2)+1<<endl;
            for(int i=d;i<=30;i+=2){ct++;}
        }
        cout<<ct<<endl;
        ct=0;

    }



    return 0;
}
