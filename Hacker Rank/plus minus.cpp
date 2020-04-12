#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr)
{
    int n=arr.size();
    int pos=0,neg=0,zero=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout<<fixed<<setprecision(6)<<(double)pos/n<<"\n"<<(double)neg/n<<"\n"<<(double)zero/n<<endl;

}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int arr_item;
        cin>>arr_item;
        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}
