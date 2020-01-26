#include<bits/stdc++.h>
using namespace std;

int main()
{
   string month1,month2;
   char c;
   int date1,date2,yr1,yr2;

            cin>>month1>>date1>>c>>yr1;
             cin>>month2>>date2>>c>>yr2;
             //cout<<month<<" "<<date<<","<<" "<<yr<<endl;
            if(month1=="March"||"April"||"May"||"June"||"July"||"August"||"September"||"October"||"November"||"December" && month2=="January")
            {
                cout<<"0"<<endl;
            }

}
