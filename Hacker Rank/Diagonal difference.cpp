#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<int>arr[],int n)
{
    int len=n;
    cout<<len<<endl;
    int leftToRight=0,rightToLeft=0;
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            if(i==j)
            {
                leftToRight+=arr[i][j];
            }
            if((i+j)==len-1)
            {
                rightToLeft+=arr[i][j];
            }

        }
    }
    cout<<"leftToRight: "<<leftToRight<<" rightToLeft: "<<rightToLeft<<endl;
    int ans=abs(leftToRight-rightToLeft);
    return ans;
}

int main()
{
    int n,x;
    cin>>n;

    vector<int>arr[n+10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>x;
            cout<<"i: "<<i<<" j: "<<j<<endl;
            arr[i].push_back(x);
        }
    }
    int result = diagonalDifference(arr,n);
    cout << result << "\n";
    return 0;
}
