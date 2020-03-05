#include<bits/stdc++.h>
using namespace std;

map<int,int>pos;

int main()
{
    int n,x;
    cin>>n;

    vector<int>even,odd;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        pos[x]=i+1;
        if(x%2==0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }

    if(even.size()==1)
    {
        cout<<pos[*even.begin()]<<endl;
    }
    else
    {
        cout<<pos[*odd.begin()]<<endl;
    }




    return 0;
}
