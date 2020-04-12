#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<"-1"<<endl;
			continue;
		}
		string s="";
		s+="2";
		for(int j=0;j<n-1;j++)
		{
			s+="3";
		}
		cout<<s<<endl;
	}
}
