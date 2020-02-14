#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        string s,t;
        cin>>s>>t;
        string z="";

        int k=0,j=0,cnt=0;
        int a[2];
        a[0]=0;
        a[1]=0;
        while(1)
        {
            k=0;
            j=0;

            if(a[0]==a[1])
            {
                break;
            }
            else
            {
                a[0]=a[1];
            }
            while(1)
            {
                if(s[k]==t[j])
                {
                    k++;
                    j++;
                    cnt++;
                }
                else
                {
                    k++;
                }
                a[1]=cnt;
                if(k==s.length())
                {
                    break;
                }

            }


        }
        cout<<cnt<<endl;

    }




    return 0;
}
