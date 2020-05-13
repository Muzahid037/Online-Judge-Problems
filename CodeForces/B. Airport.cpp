#include<bits/stdc++.h>
using namespace std;
int main()
{
    int man,plane,emptySeat;
    cin>>man>>plane;
    multiset<int>mn;
    multiset<int,greater<int>>mx;
    for(int i=0; i<plane; i++)
    {
        cin>>emptySeat;
        mx.insert(emptySeat);
        mn.insert(emptySeat);
    }
    int mxPrice=0,mnPrice=0;
    for(int i=0; i<man; i++)
    {
        int tmpMax=*(mx.begin()),tmpMin=*(mn.begin());
        mx.erase(mx.begin());
        mn.erase(mn.begin());
        mxPrice+=tmpMax;
        mnPrice+=tmpMin;
        if(tmpMax-1>0) mx.insert(tmpMax-1);
        if(tmpMin-1>0) mn.insert(tmpMin-1);
    }
    cout<<mxPrice<<" "<<mnPrice<<endl;
    return 0;
}

///-----------------------------------///
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int man,plane,emptySeat;
    cin>>man>>plane;
    priority_queue<int>mx,mn;
    for(int i=0; i<plane; i++)
    {
        cin>>emptySeat;
        mx.push(emptySeat);
        mn.push(-emptySeat);
    }
    int mxPrice=0,mnPrice=0;
    for(int i=0; i<man; i++)
    {
        int tmpMax=mx.top();
        int tmpMin=mn.top();
        tmpMin=abs(tmpMin);
        mx.pop();
        mn.pop();
        mxPrice+=tmpMax;
        mnPrice+=tmpMin;
        tmpMax--;
        tmpMin--;
        if(tmpMax>0) mx.push(tmpMax);
        if(tmpMin>0) mn.push(-tmpMin);
    }
    cout<<mxPrice<<" "<<mnPrice<<endl;
    return 0;
}
*/
///----------------------------------------------///
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int emptySeat[m+5],emptySeat2[m+5];
    for(int i=0; i<m; i++) cin>>emptySeat[i];
    sort(emptySeat,emptySeat+m);
    for(int i=0; i<m; i++) emptySeat2[i]=emptySeat[i];
    reverse(emptySeat,emptySeat+m);

    ///Finding MaxPrice
    int purchased=0,mxPrice=0;
    while(purchased<n)
    {
        purchased++;
        mxPrice+=emptySeat[0];
        emptySeat[0]--;
        sort(emptySeat,emptySeat+m);
        reverse(emptySeat,emptySeat+m);
    }

    ///Finding MinPrice
    purchased=0;
    int mnPrice=0,idx=0;
    while(purchased<n)
    {
        //cout<<purchased<<" "<<emptySeat2[idx]<<endl;
        purchased++;
        while(emptySeat2[idx]==0)
        {
            idx++;
        }
        mnPrice+=emptySeat2[idx];
        emptySeat2[idx]--;
        sort(emptySeat2,emptySeat2+m);
    }
    cout<<mxPrice<<" "<<mnPrice<<endl;

    return 0;
}
*/
