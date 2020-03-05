#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    string fst=" hate ",sec=" love ",mid="that I",last="it";

    cout<<"I";
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<sec;
        }
        else
        {
            cout<<fst;
        }
        if(i==n)
        {
            cout<<last;
        }
        else
        {
            cout<<mid;
        }
    }



    return 0;
}
