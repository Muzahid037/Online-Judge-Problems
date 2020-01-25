#include<iostream>
using namespace std;

class triangle{
private:
    float height;
    float base;
public:
    void agn(float a,float b){
{
    height=a;
    base=b;
}}
    float area(){
{
    return (3.1416*(height*height*base))/3;
}}
};

int main()
{
    triangle obj;
    float a,b;
    cin>>a>>b;
    obj.agn(a,b);
    cout<<obj.area()<<endl;
    return 0;
}

