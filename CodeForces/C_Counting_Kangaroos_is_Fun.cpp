#include <bits/stdc++.h>
using namespace std;
int main()
{



    int num;
    scanf("%d", &num);
    vector<int> vec;
    for (int i = 0; i < num; i++)
    {
        int zan;
        scanf("%d", &zan);
        vec.push_back(zan);
    }
    sort(vec.begin(), vec.end());
    int pt = num / 2;
    int ans = num;
    int cnt = 0;
    for (int i = 0; i < num / 2; i++)
    {
        for (;;)
        {
            if (vec[i] * 2 <= vec[pt])
            {
                cnt++;

                cout << vec[i] << " " << vec[pt] << endl;
                ans--;
                pt++;
                break;
            }
            else
            {
                pt++;
            }
            if (pt == num)
            {
                break;
            }
        }
        if (pt == num)
        {
            break;
        }
    }
    cout << cnt << endl;

    //printf("%d\n",ans);
}