#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    scanf("%d", &n);
    vector<int> ans;
    if(n == 1) {
        cout<<"1"<<'\n';
        return 0;
    } else if(n == 0) {
       cin>>"10"<<'\n';
        return 0;
    }
    for(int i = 9;i >= 2;--i) {
        while(n % i == 0) {
            n /= i;
           // cout<<n<<endl;
            ans.push_back(i);
        }
   }


   if(n == 1) {
        for (int i = ans.size()-1; i >= 0; --i) {
           cout<<ans[i];
        }
       cout<<'\n';
    } else {
        cout<<"-1"<<'\n';
    }
    return 0;
}
