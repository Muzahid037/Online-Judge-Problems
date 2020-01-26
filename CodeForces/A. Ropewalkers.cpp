#include<bits/stdc++.h>
using namespace std;

int main()

{
    int arr[3],d,cnt;
    cin>>arr[0]>>arr[1]>>arr[2]>>d;

    sort(arr, arr+3);
    cnt=max(0,d-(arr[1]-arr[0]))+max(0,d-(arr[2]-arr[1]));
    cout<<cnt<<endl;

    return 0;
}
