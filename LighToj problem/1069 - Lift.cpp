#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int my_pos,lift_pos;
        cin>>my_pos>>lift_pos;
        cout<<"Case "<<i<<": "<<abs(lift_pos-my_pos)*4+my_pos*4+19<<endl;
    }


    return 0;
}

