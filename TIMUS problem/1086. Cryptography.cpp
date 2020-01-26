#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MAX_N 164000

bool isPrime[MAX_N];
ll ans[15000],sz;

int main(){
    memset(isPrime,true,sizeof(isPrime));

    for(ll i = 2;i<MAX_N && sz<15000;i++){
        if(isPrime[i]){
            ans[sz] = i; ++sz;
            //if(i<MAX_N/i)
                for(ll j = i*i;j<MAX_N;j += i)
                   {
                    isPrime[j] = false;
                   }
        }
    }

    ll T,ind;
    cin>>T;

    while(T--){
        cin>>ind;
        cout<<ans[ind-1]<<endl;
    }

    return 0;
}
