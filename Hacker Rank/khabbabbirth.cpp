#include<iostream>
using namespace std;
class birth{
    int year,i,b;
public:
    void set(int y){
       year=y;
    }
    int chck(){
        if((year%100!=0&&year%4==0)||year%400==0){
        return ((year-1992)/4);}
    else{
        return 0;}
}
};
int main()
{    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
    birth obj;
    int y;
    cin>>y;
    obj.set(y);
    if(obj.chck()==0)
    cout<<"Case "<<i<<": "<<"please check another"<<endl;
    else
    cout<<"Case "<<i<<": "<<obj.chck()<<"th"<<endl;}
    return 0;
}
