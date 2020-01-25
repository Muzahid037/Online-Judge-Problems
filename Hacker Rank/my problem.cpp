#include<iostream>
using namespace std;
class fruit{
    int mango;
    int apple;
    int banana;
public:
    void asg(int m,int a,int b);
    int input();
    int total();
    int show();
};
void fruit::asg(int m,int a,int b){
    mango=m;
    apple=a;
    banana=b;
}
int fruit::input(){
    cin>>m>>a>>b;
}
int fruit::total(){
    return m+a+b;
}
int fruit::show(){
    cout<<"Mango="<<m<<endl;
    cout<<"Apple="<<a<<endl;
    cout<<"Banana="<<b<<endl;
}
int main(){
    fruit obj1;
    obj1.asg();
   obj1.input();
   obj1.total();
   obj1.show();
    cout<<total()<<endl;
    return 0;
}
