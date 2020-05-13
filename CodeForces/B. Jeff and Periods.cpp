#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>a[100009];
    set<int>st;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        a[x].push_back(i);
        st.insert(x);
    }
    int poss=0;
    string ans="";
    for(set<int>::iterator it=st.begin(); it!=st.end(); it++)
    {
        //cout<<*it<<" ";
        int tmp=*it;
        stringstream ss;
        ss << tmp;
        string str = ss.str();
        if(a[tmp].size()==1)
        {
//            cout<<"b"<<endl;
            ans+=str;
            ans+=" 0";
            ans+="\n";
            poss++;
        }
        else
        {
            vector<int>::iterator kt=a[tmp].begin();
            int flag=0;
            int diff=-1;
            for(vector<int>::iterator jt=a[tmp].begin()+1; jt!=a[tmp].end(); jt++)
            {
//                cout<<"bal"<<endl;
//                cout<<tmp<<" "<<*jt<<" "<<*kt<<" "<<diff<<endl;
                if(diff!=-1 && diff!=*jt-*kt)
                {
                    flag=1;
                    break;
                }
                diff=*jt-*kt;
                *kt=*jt;
            }
            if(flag==0)
            {
                ans+=str;
                ans+=" ";
                stringstream sss;
                sss << diff;
                string str = sss.str();
                ans+=str;
                ans+="\n";
                poss++;
            }
        }
    }
    cout<<poss<<"\n"<<ans<<endl;

    return 0;
}

