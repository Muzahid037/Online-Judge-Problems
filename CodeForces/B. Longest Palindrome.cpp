#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int checkPal(string string1,int n)
{
    int flag=0;
    for(int i=0; i < n ; i++)
    {
        if(string1[i] != string1[n-i-1])
        {
            flag = 1;
            break;
        }
        return flag;
    }
}
    int main()
    {
        int n,m;
        cin>>n>>m;
        string str[n],first[n]="",last[n]="";
        for(int i=0; i<n; i++)
        {
            cin>>str[i];
        }

        int k=0,p=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                string pal="";
                pal+=str[i]+str[j];
               cout<<pal<<endl;
                //cout<<checkPal(pal,2*n)<<endl;
                if(checkPal(pal,2*n)==0)
                {
                    first[k]+=str[i];
                   // cout<<first[k]<<endl;
                    k++;
                    last[p]+=str[j];
                   // cout<<last[p]<<endl;
                    p++;
                }
            }
        }
        for(int i=0; i<k; i++)
        {
            cout<<first[i];
        }
        for(int i=p-1; i>=0; i--)
        {
            cout<<last[i];
        }





        return 0;
    }
