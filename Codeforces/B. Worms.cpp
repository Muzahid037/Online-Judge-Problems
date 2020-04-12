#include<bits/stdc++.h>
using namespace std;

struct st{
int st,ed;
};
st a[100009];

int n,m,tmp;

int bs(int key)
{
    int mid,lo=0,hi=n-1;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(a[mid].st<=key && a[mid].ed>=key)
        {
            return mid;
        }
        else if(a[mid].ed>key)
        {
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }
    }

}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(i==0)
        {
            a[i].st=1;
            a[i].ed=tmp;
        }
        else
        {
            a[i].st=a[i-1].ed+1;
            a[i].ed=a[i-1].ed+tmp;
        }
    }

//    for(int i=1;i<=n;i++)
//    {
//        cout<<a[i].st<<" "<<a[i].ed<<endl;
//    }

    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>tmp;
        int ans=bs(tmp);
        cout<<ans+1<<endl;
    }



    return 0;
}




/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int>a;
    int tot=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        tot+=x;
        a.push_back(tot);
    }
//    for(int i=0; i<n; i++)
//    {
//        cout<<a[i]<<" ";
//    }
    int m,q;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>q;
        vector<int>::iterator upper,lower;
        upper=upper_bound(a.begin(),a.end(),q);
        lower=lower_bound(a.begin(),a.end(),q);
        int upidx=upper-a.begin();
        int loidx=lower-a.begin();

//        cout<<"upidx: "<<upidx<<endl;
//        cout<<"loidx: "<<loidx<<endl;

        if(upidx==loidx)
        {
            cout<<upidx+1<<endl;
        }
        else
        {
            cout<<upidx<<endl;
        }

    }

    return 0;
}


*/
