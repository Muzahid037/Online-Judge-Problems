#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ans(2);
for(int i=0;i<=2;i++)
{
    if(a[i]>b[i])
    {
      ans[0]++;
    }
    else if(a[i]<b[i])
    {
        ans[1]++;
    }
}
return ans;
}

int main()
{

    vector<int> a(3);

    for (int i = 0; i < 3; i++) {
        int a_item;
        cin>>a_item;
        a[i] = a_item;
    }

    vector<int> b(3);

    for (int i = 0; i < 3; i++) {
        int b_item;
        cin>>b_item;
        b[i] = b_item;
    }

    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}
