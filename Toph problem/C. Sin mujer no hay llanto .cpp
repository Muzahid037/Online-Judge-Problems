#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int cal(int n, int d)
{
	if(n == 1) return 1;
	if(n % 2 == 1)
	{
		return cal(n - 1, d) + (n - 1) * d;
	}
	else
	{
		return cal(n - 1, d) - (n - 1) * d;
	}
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,d;
       cin>>n>>d;
       cout<<cal(n,d)<<endl;
    }


    return 0;
}
