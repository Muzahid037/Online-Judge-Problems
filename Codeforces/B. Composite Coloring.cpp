#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<int,int>isprime,col;
vector<int>prime;

void sieve()
{
    isprime[0]=1;
    isprime[1]=1;
    int limit=sqrt(1000+1);
    for(int i=2; i<=limit; i++)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
            for(int j=2; i*j<1000; j++)
            {
                isprime[i*j]=1;
            }
        }
    }
//    for(vector<int>::iterator it=prime.begin(); it!=prime.end(); it++)
//    {
//        cout<<*it<<" ";
//    }
}

int main()
{
     sieve();
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        int n,a;
        cin>>n;
        int x[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }
        int cnt=0,color=1;
        for(vector<int>::iterator it=prime.begin();it!=prime.end();it++)
        {
            int iscol=0;
        for(int j=0;j<n;j++)
            {
                if((x[j]%(*it))==0 && col[x[j]]==0)
                {
                    col[x[j]]=color;
                    iscol++;
                }
                if(col[x[j]]!=0)
                {
                    cnt++;
                }

            }
            //cout<<endl;
            if(cnt==n){
                break;
            }
            cnt=0;
            if(iscol!=0){color++;}
        }
        cout<<color<<endl;
         for(int j=0;j<n;j++)
            {
                cout<<col[x[j]]<<" ";
            }
            cout<<"\n";
            col.clear();
    }


    return 0;
}

