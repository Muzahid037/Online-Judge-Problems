#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s;

    cin>>n>>t>>s;

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<s.length()-1;)
        {
            if(s[j]=='B' && s[j+1]=='G'){s[j]='G';s[j+1]='B';j+=2;}
            else{j++;}
        }
    }
    cout<<s<<endl;





 return 0;
}
