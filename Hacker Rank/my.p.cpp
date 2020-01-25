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
    return ((0.5)*height*base);
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
    cout<<"Area "<<obj.area()<<endl;
    return 0;
}

