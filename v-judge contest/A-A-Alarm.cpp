#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int hr=24;
int mn=60;
int main()
{
    while(1)
    {
        int h1,m1,h2,m2;
        cin>>h1>>m1>>h2>>m2;
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        int hrCnt=h2-h1;
        int mnCnt=m2-m1;
        //cout<<hrCnt<<" "<<mnCnt<<endl;
        if(mnCnt<0)
        {
            mnCnt+=mn;
            hrCnt--;
        }
        //cout<<hrCnt<<endl;
        if(hrCnt<0)
        {
            hrCnt+=hr;
        }
        cout<<hrCnt*mn+mnCnt<<endl;
    }
    return 0;
}

