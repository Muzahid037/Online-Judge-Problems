#include <bits/stdc++.h>

#define SIZE 20005

using namespace std;

list<int> adj[SIZE];
int visit[SIZE];
enum{NT_VIS,BLACK,RED};

int main()
{
    int t=0,i,n, x,y, node,mx1=0,mx2=0,mx=0;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        scanf("%d", &n);

        memset(visit, 0, sizeof visit);
       // for(int p = 0;  p< SIZE; p++)
        //{
         //   visit[p]=0;
        //}

        for(i = 0; i < SIZE; i++){
        	adj[i].clear();}

        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        mx1=mx2=mx=0;
        for(i = 0; i < SIZE; i++)
        {
            if(!adj[i].empty() && visit[i] ==NT_VIS)
            {
                int black=0,red=0;
                queue<int> q;
                q.push(i);
                visit[i] = BLACK;
                black++;

                while(!q.empty())
                {
                    node = q.front();
                    q.pop();
                  //  cout<<node<<" ";

                    for(list<int>::iterator it = adj[node].begin(); it != adj[node].end(); it++)
                    {
                        if(visit[*it] == NT_VIS)
                        {
                            q.push(*it);

                            if(visit[node]==BLACK){
                            visit[*it]=RED;red++;}
                            else{visit[*it]=BLACK;black++;}
                        }

                    }
                }
                if(black>red){mx+=black;}
           else {mx+=red;}

            }
         /*   mx1=mx2=0;
            for(int p=0;p<SIZE;p++)
            {
                if(visit[p]==1){mx1++;}
                if(visit[p]==2){mx2++;}
            }  */
        }
    printf("Case %d: %d\n", k, mx);
    mx1=mx2=mx=0;
    }
    return 0;
}

