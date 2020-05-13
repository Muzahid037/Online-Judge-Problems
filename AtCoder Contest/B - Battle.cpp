#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int ht,pt,ha,pa;
    cin>>ht>>pt>>ha>>pa;
    for(int i=0;; i++)
    {
        if(i%2==0)
        {
            ha-=pt;
            if(ha<0 || ha==0)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        else
        {
            ht-=pa;
            if(ht<0 || ht==0)
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    return 0;
}



