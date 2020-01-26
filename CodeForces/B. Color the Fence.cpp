///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v,x;
    cin>>v;
    vector< pair <int,int> > vect,vect2;

    for(int i=1; i<=9; i++)
    {
        cin>>x;
        vect.push_back( make_pair(x,i) );
        vect2.push_back( make_pair(x,i) );
    }

    if(v==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    sort(vect.begin(), vect.end());


    int init_x=vect[0].first;

    int idx=0;

    for (int i=1; i<=8; i++)
    {
        if(init_x==vect[i].first)
        {
            init_x=vect[i].first;
            idx=i;

        }
        //cout << vect[i].first <<" "<< vect[i].second << endl;
    }

    if(init_x>v)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    string ans;

    for (int i=1; i<=v/init_x; i++)
    {
        ans[i-1]=vect[idx].second;
    }

  int len=v-(v/init_x);

  int k=vect2.size()-1;

  for(int j=vect2.size()-1;j<=0;j--)
  {
      if(vect2[j].first<=(len+(ans[k]-'0')))
      {
          ans[k]=vect2[j].second;
          k++;
      }
  }

  cout<<ans<<endl;


    return 0;
}
