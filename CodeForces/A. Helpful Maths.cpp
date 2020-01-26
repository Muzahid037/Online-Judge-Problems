#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,t;
    char s[100];
    cin>>s;
    l=strlen(s);
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i-2;j++){
            if(s[j]>s[j+2]){
                    t=s[j];
            s[j]=s[j+2];
            s[j+2]=t;
            }
        }
        }
        cout<<s;
}
