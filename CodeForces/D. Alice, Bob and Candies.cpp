#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(ll i=0; i<n; i++) cin>>a[i];
        ll left=0,right=n-1,alice=0,bob=0,round=0,tmpAlice=0,tmpBob=0,loop;
        for( ; ; round++)
        {
            if(round%2==0)
            {
                tmpAlice=0;
                loop=0;
                while(tmpAlice<=tmpBob && left<right)
                {
                    ///cout<<" a: "<<a[left]<<" ";
                    alice+=a[left];
                    tmpAlice+=a[left];
                    left++;
                    loop++;
                }
                ///cout<<"tmpAlice: "<<tmpAlice<<endl;
                if(tmpAlice<=tmpBob)
                {
                    alice-=tmpAlice;
                    left-=loop;
                    break;
                }
            }
            else if(round%2==1)
            {
                loop=0;
                tmpBob=0;
                while(tmpBob<=tmpAlice && left<right)
                {
                    ///cout<<" b: "<<a[right]<<" ";
                    bob+=a[right];
                    tmpBob+=a[right];
                    right--;
                    loop++;
                }
                ///cout<<"tmpBob: "<<tmpBob<<endl;
                if(tmpBob<=tmpAlice)
                {
                    bob-=tmpBob;
                    right+=loop;
                    break;
                }
            }
        }
            if(left<=right)
            {
                if(round%2==0)
                {
                    while(left<=right)
                    {
                        alice+=a[left];
                        left++;
                    }
                }
                else
                {
                    while(left<=right)
                    {
                        bob+=a[right];
                        right--;
                    }
                }
                round++;
            }
            cout<<round<<" "<<alice<<" "<<bob<<endl;
    }
        return 0;
    }



