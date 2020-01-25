#include<iostream>
using namespace std;
void display(int);
void display(float);
//void display(double);
void display(char);
void display(long);
int main()
{
    int a;
    cin>>a;
    long b;
    cin>>b;   //("%ld"): 64 bit integer
    char c;
    cin>>c;   //("%c"): Character type
    float d;
    cin>>d;
  //  double e;
    //cin>>e;
    display(a);
    display(b);
    display(c);
    display(d);
    //display(e);

    return 0;
}
    void display(int a){
    cout<<"I="<<a<<endl;
    }
    void display(float a){
    cout<<"Fl="<<a<<endl;
    }
   // void display(double a){
    //cout<<"d="<<a<<endl;
 //   }
    void display(char a){
    cout<<"c="<<a<<endl;
    }
    void display(long a){
    cout<<"lon="<<a<<endl;
    }

