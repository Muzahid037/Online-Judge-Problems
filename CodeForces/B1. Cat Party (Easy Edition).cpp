#include<bits/stdc++.h>
using namespace std;

int cnt[100];

int main()
{
    int n,u,x=0;
    cin>>n;
    for(int i=0; i<n-1; i++)
    {
        cin>>u;
        if(u==1)
        {
            cnt[1]++;
            //x++;
        }
        else if(u==2)
        {
            cnt[2]++;
            //x++;
        }
        else if(u==3)
        {
            cnt[3]++;
            //x++;
        }
        else if(u==4)
        {
            cnt[4]++;
            //x++;
        }
        else if(u==5)
        {
            cnt[5]++;
            //x++;
        }
        else if(u==6)
        {
            cnt[6]++;
            //x++;
        }
        else if(u==7)
        {
            cnt[7]++;
            //x++;
        }
        else if(u==8)
        {
            cnt[8]++;
            //x++;
        }
        else if(u==9)
        {
            cnt[9]++;
            //x++;
        }
        else if(u==10)
        {
            cnt[10]++;
            // x++;
        }
    }
    cin>>u;

    int mincnt=999;
    for(int i=1; i<=10; i++)
    {
        if(mincnt>cnt[i] && cnt[i]!=0)
        {
            mincnt=cnt[i];
        }
//        if(cnt[i]!=0)
//        {
//            x++;
//        }
    }
    int flag=0;

        if(cnt[1]==mincnt)
        {
            x++;
        }
        if(cnt[1]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }

        if(cnt[2]==mincnt)
        {
            x++;
        }
        else if(cnt[2]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }
        if(cnt[3]==mincnt)
        {
            x++;
        }
        else if(cnt[3]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }

        if(cnt[4]==mincnt)
        {
            x++;
        }
        else if(cnt[4]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }

        if(cnt[5]==mincnt)
        {
            x++;
        }
        else if(cnt[5]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }


        if(cnt[6]==mincnt)
        {
            x++;
        }
        else if(cnt[6]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }



        if(cnt[7]==mincnt)
        {
            x++;
        }
        else if(cnt[7]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }


        if(cnt[8]==mincnt)
        {
            x++;
        }
        else if(cnt[8]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }

        if(cnt[9]==mincnt)
        {
            x++;
        }
        else if(cnt[9]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }


        if(cnt[10]==mincnt)
        {
            x++;
        }
        else if(cnt[10]==mincnt+1 && flag==0)
        {
            x++;
            flag=1;
        }

    //cout<<mincnt<<endl;
    //cout<<x<<endl;
    cout<<(mincnt*x)+1<<endl;



    return 0;
}
