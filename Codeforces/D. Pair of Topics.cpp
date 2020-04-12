#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,x;
	cin >> n;
	vector<int>a,b;
	for (int i = 0; i < n; ++i) {
	    cin>>x;
	    a.push_back(x);
	}
	for (int i = 0; i < n; ++i) {
	    cin>>x;
        b.push_back(x);
	}
//	for (auto &it : a) cin >> it;
//	for (auto &it : b) cin >> it;
	vector<int>c;
	for (int i = 0; i < n; ++i) {
		x=a[i] - b[i];
		c.push_back(x);
	}
	sort(c.begin(), c.end());

	for (int i = 0; i < n; ++i) {
		cout<<c[i]<<" ";
	}
cout<<endl;
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		if (c[i] <= 0) continue;
		cout<<"-c[i] + 1: "<<-c[i] + 1<<endl;
		int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
		cout<<"pos: "<<pos<<endl;
		ans += i - pos;
		cout<<"ans: "<<ans<<endl;

	}

	cout << ans << endl;

	return 0;
}
