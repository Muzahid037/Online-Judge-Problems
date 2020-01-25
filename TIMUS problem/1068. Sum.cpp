///Bismillahir Rahmanir Rahim
/**
 *    author: s0L0
 *
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x>0)
    {
        cout<<(x*(x+1))/2<<endl;
    }
    else
    {
        cout<<1+(-1)*((x*(x-1))/2)<<endl;          ///x==0
    }



    return 0;
}

