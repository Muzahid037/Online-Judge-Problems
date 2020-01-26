#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(islower(a[0])){a[0]=toupper(a[0]);}
    cout<<a<<endl;
}
