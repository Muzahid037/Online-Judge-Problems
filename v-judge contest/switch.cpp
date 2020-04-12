#include<bits/stdc++.h>
using namespace std;
map<int,int>bulb;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int noOfSwitch,numberOfBulb;
    cin>>noOfSwitch>>numberOfBulb;
    int noOfOffBulb=numberOfBulb;
    vector<int>sw[noOfSwitch];
    int noOfOnBulb;
    cin>>noOfOnBulb;
    noOfOffBulb-=noOfOnBulb;
    int onOfBulb;
    for(int i=1; i<=noOfOnBulb; i++)
    {
        cin>>onOfBulb;
        bulb[onOfBulb]=1;
    }
    int k;
    for(int i=0; i<noOfSwitch; i++)
    {
        cin>>k;
        for(int j=0; j<k; j++)
        {
            cin>>onOfBulb;
            sw[i].push_back(onOfBulb);
        }
    }

    int ans=0;
    int ques=noOfOffBulb;
    int z=2;
    while(z!=0)
    {
        for(int i=0; i<noOfSwitch; i++)
        {
            for(vector<int>::iterator it=sw[i].begin(); it!=sw[i].end(); it++)
            {
                if(bulb[*it]==0)
                {
                    bulb[*it]=1;
                    noOfOffBulb--;
                }
                else
                {
                    bulb[*it]=0;
                    noOfOffBulb++;
                }
            }
            if(z==2)
            {
                ans=i+1;
            }
            else if(z==1)
            {
                ans=noOfSwitch+i+1;
            }
            if(noOfOffBulb==numberOfBulb)
            {
                cout<<ans<<endl;
                return 0;
            }
        }
        z--;
    }
    cout<<"-1"<<endl;

    bulb.clear();

    return 0;
}
