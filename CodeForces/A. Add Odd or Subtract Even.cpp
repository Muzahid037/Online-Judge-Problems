#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b){cout<<"0"<<endl;continue;}
        if(a<b)
        {
            int x=b-a;
            if(x%2!=0){
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
        else
        {
            int y=a-b;
            if(y%2==0){
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }

        }
    }


  return 0;
}
