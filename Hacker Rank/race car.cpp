#include<iostream>
using namespace std;
class race{
    int lw1,cw1;
    int lw2,cw2;
    int sp1,sp2;
    int ms;
public:
    void agn(int m,int n,int c1,int c2){
        lw1=m;
        lw2=n;
        cw1=c1;
        cw2=c2;
    }
    int car(){
    sp1=1-(lw1/(lw1+cw1));
    sp2=1-(lw2/(lw2+cw2));
    if(sp1>sp2){
        return 1;}
        else if(sp1==sp2){
            return 0;
        }
        else{
            return 2;
        }
    }
};
int main()
{
    race obj;
    int lw1,lw2,cw1,cw2,ms;
    cin>>cw1>>cw2>>ms>>lw1>>lw2;
    obj.agn(lw1,lw2,cw1,cw2);
    cout<<obj.car()<<endl;
}
