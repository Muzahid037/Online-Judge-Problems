#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ct=1;
    cin>>n;
    char str[1000000];
    getchar();
    gets(str);

    for(int i=0;i<n-1;i++)
    {
        if(str[i]>str[i+1]){cout<<"Yes"<<endl<<i+1<<" "<<i+2<<endl;return 0;}
    }
     cout<<"No"<<endl;


   // puts(str);

    return 0;
}
