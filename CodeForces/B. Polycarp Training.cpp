#include<bits/stdc++.h>
using namespace std;
int a;
vector<int>s;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        s.push_back(a);

    }
    sort(s.begin(),s.end());
    int pos=0;
    for(vector<int>::iterator it=s.begin(); it!=s.end(); it++)
    {
       // cout<<"s[it] "<<*it<<" pos ="<<pos<<endl;
        if(*it>pos){pos++;}
        }
    cout<<pos<<endl;
    return 0;
}
