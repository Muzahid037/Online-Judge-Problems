#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    BOOST
    int l,r;
    cin>>l>>r;
    while(l!=r)
    {
        //cout<<l<<" "<<r<<endl;
        if(l>r)
        {
            if(l%2==0) l/=2;
            else l=((l-1)/2);
        }
        else
        {
            if(r%2==0) r/=2;
            else r=((r-1)/2);
        }
//        cout<<l<<" "<<r<<endl;
//        cout<<"----------------------"<<endl;
    }
    cout<<l<<endl;
    return 0;
}

