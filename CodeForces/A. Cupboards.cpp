#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int l,r,leftOne=0,rightOne=0;
    for(int i=0; i<n; i++)
    {
        cin>>l>>r;
        leftOne+=l;
        rightOne+=r;
    }
    cout<<leftOne<<" "<<rightOne<<endl;
    int leftAns=min(leftOne,n-leftOne);
    int rightAns=min(rightOne,n-rightOne);
    cout<<leftAns+rightAns<<endl;
    return 0;
}


