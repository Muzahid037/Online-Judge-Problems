#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double r;
        cin>>r;
        double area=3.1416*r*r;

        cout<<fixed<<setprecision(3)<<(double)area<<endl;
    }

    return 0;
}
