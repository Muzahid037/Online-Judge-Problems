#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int cntA=0,idx;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A')
        {
            cntA++;
        }
        if(s[i]!='A')
        {
            idx=i;
            break;
        }
    }
    int flag=0,cntEx=0;
    for(int j=idx; j<s.size(); j++)
    {
        if(s[j]=='!')
        {
            cntEx++;
        }
        if(s[j]!='!')
        {
            flag=1;
        }
    }

    if(cntA>0 && cntEx>0 && flag==0)
    {
        cout << "Panic!"<< '\n';
    }
    else
    {
        cout<<"No panic" <<endl;
    }

    return 0;
}
