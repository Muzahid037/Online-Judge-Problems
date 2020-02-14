#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<double>v;

int main()
{
    double a;
    while(cin>>a)
    {
       v.push_back(a);
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<fixed<<setprecision(4)<<(double)sqrt(v[i])<<endl;
    }

    return 0;
}
