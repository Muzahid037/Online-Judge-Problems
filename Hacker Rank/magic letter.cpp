#include<iostream>
#include<string.h>
using namespace std;
class str{
public:
    char w[100],rw[100],fw[100];
};
int main()
{
    str ob,ob1,ob2;
    int i,len,lenrev,j=0,k=0,lenfinal;
    cin>>ob.w;
    len = strlen(ob.w);
    for(i=len-1;i>=0;i--){
        ob1.rw[j] = ob.w[i];
        j++;}
    ob1.rw[j] = '\0';
    lenrev = strlen(ob1.rw);
    for(i=0;i<lenrev;i++){
        if((ob1.rw[i] == 'a') || (ob1.rw[i] == 'e') || (ob1.rw[i] == 'i') || (ob1.rw[i] == 'o') || (ob1.rw[i] == 'u')){
            continue;
        }
        else{
            ob2.fw[k] = ob1.rw[i];
            k++;
        }
    }
    ob2.fw[k] = '\0';
    cout<<ob2.fw<<endl;
    return 0;
}
