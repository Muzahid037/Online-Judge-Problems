#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin>>n;
    string s;
    set<string>st;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        st.insert(s);
    }
    cout<<st.size()<<endl;
    return 0;
}




