#include<bits/stdc++.h>
using namespace std;
 long long f1(long long n,long long m,long long a)
 {
     if(n%a==0&&m%a==0){
     return ((n/a)*(m/a));}
     else if(n%a!=0&&m%a!=0){
        return (((n/a)+1)*((m/a)+1));}
     else if(n%a!=0&&m%a==0){
       return (((n/a)+1)*(m/a));}
     else if(n%a==0&&m%a!=0){
       return ((n/a)*((m/a)+1));}
 }
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    cout<<f1(n,m,a)<<endl;
    return 0;
}
