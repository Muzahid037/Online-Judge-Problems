#include<bits/stdc++.h>
using namespace std;

int main()
{
    char un[105];
    gets(un);
    int ck[26]= {0},ct=0;
    int n=strlen(un);
    for(int i=0; i<n; i++)
    {
        if(ck[un[i]-97]==0)
        {
            ck[un[i]-97]++;
        }
        else
        {
            ct++;
        }
    }
    //cout<<ct<<endl;
    int x=n-ct;
    // cout<<x;
    if(x%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
