#include<bits/stdc++.h>
using namespace std;
int b[6][6];
int main()
{
    char c;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>c;
            if(c=='#') b[i][j]=0;
            else b[i][j]=1;
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int curr=b[i][j]+b[i][j+1]+b[i+1][j]+b[i+1][j+1];
            if(curr!=2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}

///--------------------------------------///
/*
#include<bits/stdc++.h>
using namespace std;
int b[6][6];
int main()
{
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++) b[i][j]=9999;
    }
    char a;
    for(int i=1; i<5; i++)
    {
        for(int j=1; j<5; j++)
        {
            cin>>a;
            if(a=='#') b[i][j]=0;
            else b[i][j]=1;
        }
    }

    for(int i=1; i<5; i++)
    {
        for(int j=1; j<5; j++)
        {
            int curr=b[i][j];

            int lu=curr+b[i][j-1]+b[i-1][j]+b[i-1][j-1];
            int ru=curr+b[i][j+1]+b[i-1][j]+b[i-1][j+1];

            int ld=curr+b[i][j-1]+b[i+1][j]+b[i+1][j-1];
            int rd=curr+b[i][j+1]+b[i+1][j]+b[i+1][j+1];

            if(lu==3 || lu==1 || lu==0 || lu==4 || ru==3 || ru==1 || ru==0 || ru==4 || ld==3 || ld==1 || ld==0 || ld==4 || rd==3 || rd==1 || rd==0 ||rd==4)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}

*/
