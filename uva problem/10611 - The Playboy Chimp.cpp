#include<bits/stdc++.h>
using namespace std;

vector<int>a;
int n,x,q,h;


int main()
{

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }

    cin>>q;

    for(int i=0; i<q; i++)
    {
        cin>>h;


        vector<int>::iterator low,up;

        low= lower_bound (a.begin(), a.end(), h);
        up = upper_bound (a.begin(), a.end(), h);

       if(low-a.begin()==0)
       {
           cout<<"X ";
       }
       else
       {
           cout<<*(low-1)<<" ";
       }
       if(up-a.begin()==(a.size()))
       {
           cout<<"X ";
       }
       else
       {
           cout<<*up<<endl;
       }

    }


    return 0;
}
