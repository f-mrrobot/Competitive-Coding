#include <bits/stdc++.h>
using namespace std;
int compare (const void * a, const void * b)
{
  			return ( *(int*)a - *(int*)b );
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i=0,c=0,d;
		cin>>n>>k;
		long int a[n];
		while(i<n)
		{
			cin>>a[i++];
		}
		i=0;
  		qsort (a, n, sizeof(long int), compare);
  		d=a[k-1]-a[0];
		if(k>1 && k<n)
		{
				for(i=0;i<=n-k;i++)
				{
					c=a[i+k-1]-a[i];
					if(d>c)
						d=c;
				}
		}
		else if(k==1)
			d=0;
		else if(n==k)
			d=a[n-1]-a[0];
		cout<<d<<endl;

	}
}
