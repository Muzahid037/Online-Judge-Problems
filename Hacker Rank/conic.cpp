#include<iostream>
using namespace std;

class triangle{
private:
    float height;
    float base;
public:
    void set(float a,float b);
    float area();
};
float triangle::area()
{
    return (3.1416*(height*height*base))/3;
}
void triangle::set(float a,float b)
{
    height=a;
    base=b;
}
int main()
{
    triangle obj;
    float a,b;
    cin>>a>>b;
    obj.set(a,b);
    cout<<obj.area()<<endl;
    return 0;
}

