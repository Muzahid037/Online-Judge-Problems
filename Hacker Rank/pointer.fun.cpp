#include<iostream>
using namespace std;

void update(int *a,int *b)
{
    *a=*a+*b;
    if((*a-*b)>*b)
    {
    *b=(*a-*b)-*b;
    }
    else
    *b=*b-(*a-*b);
}

int main() {
    int a, b;
    cin>>a>>b;
    int *pa = &a;
    int *pb = &b;
    update(&a,&b);
    cout<<a<<'\n'<<b;

    return 0;
}
