#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int ara[]={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    int n;
    cin>>n;
    int mn=999999999;
    for(int i=0;i<36;i++)
    {
        //cout<<abs(n-ara[i])<<endl;
        mn=min(mn,abs(n-ara[i]));
    }
   cout<<mn<<endl;

    return 0;
}


