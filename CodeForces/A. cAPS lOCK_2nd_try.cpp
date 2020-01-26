#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y=0,z=0;
    char c[100];
    gets(c);
    for(int i=0;c[i]!='\0';i++){
            y++;
        if(c[i]>='A'&&c[i]<='Z'){z++;}
    }
    if(y==z){
        for(int i=0;c[i]!='\0';i++){
        c[i]=c[i]+32;
    }
    }
    else if(y==(z+1)&&c[0]>='a'&&c[0]<='z'){
            c[0]=c[0]-32;
             for(int i=1;c[i]!='\0';i++){
        c[i]=c[i]+32;
    }
    }
    cout<<c<<endl;
    return 0;
}
