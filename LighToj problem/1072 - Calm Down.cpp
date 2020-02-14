#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    int t;
    cin>>t;
    double R;
    int n;
    for(int i=1;i<=t;i++)
    {
        cin>>R>>n;
        double peri=2*3.1416*R;
        cout<<peri<<endl;
        cout<<(double)((peri/n)/2)<<endl;

    }



    return 0;
}

