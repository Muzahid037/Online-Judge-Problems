#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int a, r, g, b, N;
    unsigned long long int sum = 0;
    long int sumR, sumB, sumG;
    char mozi[4001];
    int tab;

    scanf("%ld", &N);
    scanf("%s", &mozi);

    sumR = 0;
    sumB = 0;
    sumG = 0;

    for (a = 0; a < N; a++)
    {
        if ('R' == mozi[a])
        {
            sumR++;
        }

        if ('B' == mozi[a])
        {
            sumB++;
        }
        if ('G' == mozi[a])
        {
            sumG++;
        }
    }

    sum = sumR * sumB * sumG;

    for (a = 0; a < N; a++)
    {
        for (b = 0; (b + 2 * a) < N; b++)
        {
            cout<<b<<" "<<(b + 2 * a)<<endl;
            cout<<"idx: "<<b<<" "<<b+a<<" "<<b+2*a<<endl;
            if ((mozi[b] != mozi[b + a]) && (mozi[b + 2 * a] != mozi[b + a]) && (mozi[b] != mozi[b + a * 2]))
            {
                sum--;
            }
        }
        cout<<"---------------"<<endl;
    }

    printf("%lld", sum);

    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j+=2)
        {
            for(int k=j+1; k<n; k+=3)
            {
//                cout<<i<<"-"<<s[i]<<" "<<j+1<<"-"<<s[j+1]<<" "<<k+3<<"-"<<s[k+3]<<endl;
//                cout<<i<<"-"<<s[i]<<" "<<j+2<<"-"<<s[j+2]<<" "<<k+3<<"-"<<s[k+3]<<endl;
//                cout<<"--------------------"<<endl;
               if(j-i!=k-j && s[i]!=s[j] && s[i]!=s[k] && s[j]!=s[k])
               {
                   ans++;
               }
               if(k-i!=k-j && s[i]!=s[j] && s[i]!=s[k] && s[j]!=s[k])
               {
               }
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
*/
