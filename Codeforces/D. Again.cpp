///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    char c;
    for(int i=0;i<=6;i++)
    {
        cin>>c;
        if(i==6 && (c-'a')%2==0)
        {
            cout<<"1"<<endl;
            return 0;
        }
    }
    cout<<"0"<<endl;

    return 0;
}


