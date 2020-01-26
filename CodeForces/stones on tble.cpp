#include<iostream>
using namespace std;
int main()
{
    int n,i,cont=0;
    char s[50];
    cin>>n;
    s[0]='\0';
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        if(s[i-1]==s[i]){cont++;}
    }
    cout<<cont<<endl;
}
