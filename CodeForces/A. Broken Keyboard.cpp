#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    string s,p;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        for(int i=0; i<(s.length())-1; i++)
        {
            if(s[i]==s[i+1])
            {
                s.erase(i);
                s.erase(i+1);
            }

        }
        cout<<s<<endl;
    }


    return 0;
}
