#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int ara[]={1,11,111,2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,8,88,888,9,99,999};
    int n;
    cin>>n;
    int mn=100000;
    for(int i=0;i<27;i++)
    {
        mn=min(mn,abs(n-ara[i]));
    }
   cout<<mn<<endl;

    return 0;
}

