#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int s,w;
    cin>>s>>w;
    if(s==w || s<w)
        {
            cout<<"unsafe"<<endl;
        }
        else
        {
            cout<<"safe"<<endl;
        }
    return 0;
}
