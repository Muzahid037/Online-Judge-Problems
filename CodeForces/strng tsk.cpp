#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100],co[100];
    int i,j;
    cin>>c;
    j=0;
    int l=strlen(c);
    for(i=0;i<l;i++)
    {
        if(c[i]!='A'&&c[i]!='E'&&c[i]!='I'&&c[i]!='O'&&c[i]!='U'&&c[i]!='Y'&&c[i]!='a'&&c[i]!='e'&&c[i]!='i'&&c[i]!='o'&&c[i]!='u'&&c[i]!='y')
        {
            co[j]=c[i];
             if(co[j]>='A'&&co[j]<='Z'){co[j]=co[j]+32;}
            j++;
        }
    }
    co[j]='\0';
     int m=strlen(co);
     for(int i=0;i<m;i++){
    cout<<"."<<co[i];
    }
}
