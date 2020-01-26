#import<iostream>
using namespace std;
int a,b,c,d;
main()
{
    cin>>a>>b>>c>>d;
    a<b?:a^=b^=a^=b,b<c?:b^=c^=b^=c,a<b?:a^=b^=a^=b;
    cout<<(a+d<b?0:d+a-b)+(b+d<c?0:d+b-c);
}
