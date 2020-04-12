///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   int in;
   cin>>in;
   int out=2;
   while(1)
   {
       if(in%out==0){break;}
       out++;
   }
   cout<<out<<in/out;
    return 0;
}

