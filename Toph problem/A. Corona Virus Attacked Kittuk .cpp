#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    char ch;
    string str="";
    while (cin.peek() != '\n')
    {
        cin>>ch;
        if(ch=='0')
        {
            str+="0";
        }
        else if(ch!='\n')
        {
            cout<<str<<ch;
            str="";
        }
    }
    cout<<"\nStay at Home"<<endl;
    return 0;
}
