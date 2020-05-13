#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int low=0;
    int high=11;
    int g;
    string s1,s2;
    while(cin>>g)
    {
        if(g==0)
        {
            break;
        }
        cin>>s1>>s2;
        if(s2=="low")
        {
            low=max(low,g);
        }
        else if(s2=="high")
        {
            high=min(high,g);
        }
        //cout<<low<<" "<<high<<endl;
        else
        {
            if(g>low && g<high)
            {
                cout<<"Stan may be honest"<<endl;
            }
            else
            {
                cout<<"Stan is dishonest"<<endl;
            }
            int low=0;
            int high=11;
        }
    }
    return 0;
}


