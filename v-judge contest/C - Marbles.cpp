#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,c;
    cin>>n;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>l>>c;
        if(abs(l-c)%2==0)
        {
            cnt++;
        }
    }
    if(cnt>0)
    {
        cout<<"Y"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }


    return 0;
}
