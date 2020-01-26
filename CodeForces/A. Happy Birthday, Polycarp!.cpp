#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,num,y;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n<=10)
        {
            cout<<n<<endl;
        }
        else
        {
           num=n;
           y=1;
           x=0;

            unsigned int number_of_digits = 0;

            do
            {
                ++number_of_digits;
                num /= 10;
            }
            while (num);

            for(int j=0;j<number_of_digits-1;j++)
            {
                y = (y * 10) + 1;
                x+=n/y;
            }



            cout<<9+x<<endl;
        }
    }

    return 0;
}
