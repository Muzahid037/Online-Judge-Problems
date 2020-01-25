#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n,i,x;
    cin>>n;
    vector<int>a;
    int k=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++){
        cin>>x;
        a.push_back(x);
    }
    }
    //int x = sizeof(a)/sizeof(a[0]);

    sort(a.begin(),a.end());
    reverse(a.begin(), a.end());

    /*for(int i=0; i<n*n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;*/

    int mx=0;
    int mn=0;
    if(n%2==0){
    for(int i=0;i<n;i++)
    {
        mx+=a[i];
        mn+=a[(n*n)-1-i];
    }
    }
    else{
        for(i=0;i<n-1;i++)
        {
            mx+=a[i];
            mn+=a[(n*n)-1-i];
        }
        mx+=a[i];
        mn+=a[n-1];
    }

    //cout<<"mx="<<mx<<" "<<"mn="<<mn<<" ";

    cout<<mx-mn<<endl;




    return 0;
}
