#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >>n;
	set<set<char> >root;
	string si;
	while(cin>>si)
	{
		set<char>r{si.begin(),si.end()};
		root.insert(r);
	}
	cout << root.size() <<endl;
}
