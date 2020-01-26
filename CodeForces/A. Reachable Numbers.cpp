#include<bits/stdc++.h>
using namespace std;

int main()

{
    vector<int>v;
    int n,ct,x;
    cin>>n;
    v.push_back(n);
    ct=0;
//    while(n%10==0){n=n/10;}
    //cout<<n<<endl;
    while(1)
    {
        n=n+1;
        while(n%10==0)
        {
            n/=10;
        }


        if (count(v.begin(), v.end(), n))
        {
           // cout<<"Ase"<<endl;
            break;
        }
        else
        {
            //cout<<n<<endl;
            ct++;
            v.push_back(n);
        }

    }
    cout<<ct+1<<endl;

    return 0;
}
