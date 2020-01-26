#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,s,v,j,e,f,a,x1,y1,y2;

    cin>>t>>s>>v>>j>>e>>f;

    int a1,a2,a22;

    x1=min(t,j);

    y1=min(s,v);
    y2=min(y1,j);

    if(e>f || (e==f && x1>=y2))
    {
        if(t>=j)
        {
            a1=j;
            t=t-j;
            j=0;
        }
        else
        {
            a1=t;

            j=j-t;
            t=0;
        }

        a22=min(s,v);
        a2=min(a22,j);

        a=a1*e+a2*f;

        cout<<a<<endl;
    }
    else
    {
        if(s<=v)
        {
            if(s<=j)
            {
                a2=s;
                j=j-s;
                v=v-s;
                s=0;
            }
            else
            {
                a2=j;
                s=s-j;
                v=v-j;
                j=0;
            }
        }
        else
        {
            if(v<=j)
            {
                a2=v;

                j=j-v;
                s=s-v;
                v=0;
            }
            else
            {
                a2=j;

                s=s-j;
                v=v-j;
                j=0;
            }
        }
        a1=min(t,j);

        a=(a1*e)+(a2*f);

//        cout<<"a1="<<a1<<endl;
//        cout<<"f="<<f<<endl;

        cout<<a<<endl;
    }



    return 0;
}
