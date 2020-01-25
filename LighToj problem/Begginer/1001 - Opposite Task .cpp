#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   int n;
        cin>>n;
        if(n==0){cout<<"0 "<<"0"<<endl;}
        else if(n>=10){cout<<n-10<<" "<<"10"<<endl;}
        else if(n<10){cout<<n<<" "<<"0"<<endl;}

    }
    return 0;
}
