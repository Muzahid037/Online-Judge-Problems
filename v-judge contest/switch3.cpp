#include<bits/stdc++.h>
using namespace std;
bitset<1010>sw[1100],bulb;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int noOfSwitch,numberOfBulb;
    cin>>noOfSwitch>>numberOfBulb;
    int noOfOnBulb;
    cin>>noOfOnBulb;
    int onOfBulb;
    for(int i=1; i<=noOfOnBulb; i++)
    {
        cin>>onOfBulb;
        bulb.set(onOfBulb);
    }
    int k;
    for(int i=1; i<=noOfSwitch; i++)
    {
        cin>>k;
        for(int j=0; j<k; j++)
        {
            cin>>onOfBulb;
            sw[i].set(onOfBulb);
        }
    }
    for(int i=1; i<=noOfSwitch; i++)
    {
        bulb^=sw[i];
        if(bulb.count()==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    for(int i=1; i<=noOfSwitch; i++)
    {
        bulb^=sw[i];
        if(bulb.count()==0)
        {
            cout<<noOfSwitch+i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
