#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    for(int i=0;a[i]!='\0';i++)
	{
		a[i]=tolower(a[i]);
	}
	for(int i=0;b[i]!='\0';i++)
	{
		b[i]=tolower(b[i]);
	}
//	cout<< a<< "\t"<< b<<endl;
    if(a>b)
        cout << "1"<<endl;
    else if (b>a)
        cout << "-1" << endl;
    else
        cout << "0" << endl;
    return 0;
}
