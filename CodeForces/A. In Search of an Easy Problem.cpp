#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,x;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1){cnt++;}
    }
    if(cnt>0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }




    return 0;
}
