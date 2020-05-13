#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch[9][9];
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cin>>ch[i][j];
            }
        }
        cout<<endl;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if( (i==0 && j==0) || (i==1 && j==3) || (i==2 && j==6) || (i==3 && j==1) || (i==4 && j==4) || (i==5 && j==7) || (i==6 && j==2) || (i==7 && j==5) || (i==8 && j==8) )
                {
                    if(ch[i][j]=='1')
                    {
                        ch[i][j]='2';
                    }
                    else
                    {
                        ch[i][j]='1';
                    }
                }
            }
        }
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cout<<ch[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}

