#include<bits/stdc++.h>
using namespace std;
int mat[105][105];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n;
        cin>>n;
        int trace=0,repRow=0;
        for(int i=1; i<=n; i++)
        {
            set<int>st1;
            for(int j=1; j<=n; j++)
            {
                cin>>mat[i][j];
                if(i==j)
                {
                    trace+=mat[i][j];
                }
                st1.insert(mat[i][j]);
            }
            if(n!=st1.size())
            {
                repRow++;
            }
            st1.clear();
        }
        int repCol=0;
        for(int j=1; j<=n; j++)
        {
            set<int>st2;
            for(int i=1; i<=n; i++)
            {
                st2.insert(mat[i][j]);
            }
            if(n!=st2.size())
            {
                repCol++;
            }
            st2.clear();
        }
        cout<<"Case #"<<k<<": "<<trace<<" "<<repRow<<" "<<repCol<<endl;
    }
    return 0;
}


