
    #include<iostream>
    using namespace std;

    int main()
    {
    	long long n;
    	cin>>n;
    	long long a[200010];
    	for(long long j=0;j<n;j++)
    	{
    		cin>>a[j];
    	}
    	long long max;
    	max=a[0];
    	long long i=1;
    	while(1)
    	{
    		a[i]+=max;
    		if(a[i]>max)
    		{
    			max=a[i];
    		}
    		i++;
    		if(i==n){break;}
    		}
    		for(long long j=0;j<n;j++)
    		{
    			cout<<a[j]<<" ";
    		}
    		cout<<endl;
    	}
