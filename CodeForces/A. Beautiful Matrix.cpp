#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,y,a[5][5],b[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
      for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]==1){
                    x=i;
                    y=j;
                    break;
            }
        }
    }
    if(x>2){
        if(y>2){cout<<(x-2)+(y-2)<<endl;}
        else if(y<2){cout<<(x-2)+(2-y)<<endl;}
        else if(y==2){cout<<(x-2)<<endl;}
    }
    if(x<2){
       if(y>2){cout<<(2-x)+(y-2)<<endl;}
        else if(y<2){cout<<(2-x)+(2-y)<<endl;}
        else if(y==2){cout<<(2-x)<<endl;}
    }
    if(x==2){
        if(y>2){cout<<(y-2)<<endl;}
        else if(y<2){cout<<(2-y)<<endl;}
        else if(y==2){cout<<"0"<<endl;}
    }
    return 0;
}
