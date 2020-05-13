#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
///   Trailing 0s in x!=Count of 5s in prime factors of x!= floor(x/5)+floor(x/25)+floor(x/125)+...  ///
ll countZeroOfPredictedFactorial(ll predictedMid)
{
    ll cntZero=0;
    ll divisor=5;
    while(divisor<=predictedMid)
    {
       cntZero+=(predictedMid/divisor);
       divisor*=5;
    }
    return cntZero;
}

ll func(ll realNumberOfZerosOfFactorial)
{
    ll predictedLowfact=0;
    ll predictedHighfact=5*realNumberOfZerosOfFactorial;
    ll predictedMid;
    while(predictedLowfact<=predictedHighfact)
    {
        predictedMid=(predictedLowfact+predictedHighfact)/2;
        if(countZeroOfPredictedFactorial(predictedMid)>=realNumberOfZerosOfFactorial)
        {
            predictedHighfact=predictedMid-1;
        }
        else
        {
            predictedLowfact=predictedMid+1;
        }
    }
    return predictedLowfact;
}
int main()
{
    ll realNumberOfZerosOfFactorial;
    cin>>realNumberOfZerosOfFactorial;

    ll ans=func(realNumberOfZerosOfFactorial);
    cout<<ans<<endl;

    return 0;
}



