#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t,cntN,cntU,a[105];
    char str[105];
    cin>>t;
    for(int k=0; k<t; k++)
    {
        getchar();
        gets(str);
        for(int i=0; i<strlen(str); i++)
        {
            a[i]=(int)str[i];
        }
        for(int j=1; j<=strlen(str)-1; j++)
        {
            if(a[j]==a[j+1] || a[j]+1==a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }


        cntN=0;
        cntU=0;
        for(int u=0; u<strlen(str)-1; u++)
        {

        if(a[u]==(a[u+1]+1) ||  (a[u]+1)==(a[u+1])  ||  !(a[u]==97 && a[u+1]==122 || a[u]==122 && a[u+1]==97)  )
        {
          //  adju++;
            cntU++;
        }
        else
        {
            //adju=0;
        }
        //else if((int)str[i]==97 && (int)str[i+1]==122  || )
    }
    cntN=1+strlen(str)-cntU;



    cout<<"Ugly="<<cntU<<" "<<"Not Ugly= "<<cntN<<endl;

    for(int x=0;x<strlen(str);x++)
    {
        cout<<(char)(a[x]);
    }
    cout<<endl;
}


return 0;
}
