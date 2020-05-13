#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector < vector <int> > a(15, vector <int> (5, 1));
    int x;
    for(int i=1; i<4; i++)
    {
        for(int j=1; j<4; j++)
        {
            cin>>x;
            if(x%2==1)
            {
                a[i][j]=1- a[i][j];
                a[i+1][j]=1- a[i+1][j];
                a[i-1][j]=1- a[i-1][j];
                a[i][j+1]=1- a[i][j+1];
                a[i][j-1]=1- a[i][j-1];
            }
        }
    }
    for(int i=1; i<4; i++)
    {
        for(int j=1; j<4; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}


