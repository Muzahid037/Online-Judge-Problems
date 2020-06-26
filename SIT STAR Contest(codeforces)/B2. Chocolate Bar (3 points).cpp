#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
string yn[]={"YES","NO"};
int main()
{
    BOOST
    int a,b;
    cin>>a>>b;
    if(a%2==0 || b%2==0) cout<<yn[0]<<endl;
    else cout<<yn[1]<<endl;
    return 0;
}

