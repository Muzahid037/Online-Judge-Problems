#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[105];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    a[n]=0;
    int cnt=0;
    int flag=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]+a[i+1]==5){cout<<"Infinite"<<endl;return 0;}
        cnt+=a[i]+a[i+1];
        //cout<<"cnt= "<<cnt<<endl;
        if(a[i]==3 && a[i+1]==1 && a[i+2]==2){cnt--;}

    }

        cout<<"Finite"<<endl<<cnt<<endl;


    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;
int n,a[110],tot;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		if(i==1)continue;
		if(a[i]+a[i-1]==5)return puts("Infinite"),0;
		tot+=a[i]+a[i-1];
		if(a[i-2]==3&&a[i-1]==1&&a[i]==2)--tot;
	}
	printf("Finite\n%d",tot);
	return 0;
}

*/
