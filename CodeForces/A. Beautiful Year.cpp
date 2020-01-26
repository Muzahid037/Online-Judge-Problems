///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main()
{


    int year,w[4];
    cin>>year;

    year++;
    w[0]=year%10;
    w[1]=(year/10)%10;
    w[2]=(year/100)%10;
    w[3]=(year/1000)%10;
    while(w[0]==w[1] || w[0]==w[2] || w[0]==w[3] || w[1]==w[2] || w[1]==w[3] || w[2]==w[3])
    {
        year++;
        w[0]=year%10;
    w[1]=(year/10)%10;
    w[2]=(year/100)%10;
    w[3]=(year/1000)%10;

    }

    cout<<year<<endl;

    return 0;
}
