#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[9];
    cin>>n;
    getchar();
    char s[n];
    gets(s);
    for(int i=1;i<=9;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[s[i-1]];
    }
    //puts(s);

    return 0;
}
