#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int>cnt;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int ln=s.size();
        int i=0,j=0;
        while(i<ln-1)
        {
            if(s[i]==0){i++;}
            else if(s[i]==1 && s[i+1]==1){i++;}
            else if(s[i]==1 && s[i+1]==0)
            {
                i++;
                while(s[i]==0)
                {
                    cnt[j]++;
                }
                j++;
            }
        }
        for(vector<int>::iterator it=cnt.begin();it!=cnt.end();it++)
        {
            cout<<*it<<endl;
        }


    }


    return 0;
}
