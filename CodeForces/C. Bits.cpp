

#include <iostream>

using namespace std;


int main()
{
    long long int l,r,n;
    cin>>n;
    while(n--)
    {
        cin>>l>>r;
        while((l|(l+1))<=r)
        {
            l|=(l+1);
        }
        cout<<l<<endl;
    }

    return 0;
}
