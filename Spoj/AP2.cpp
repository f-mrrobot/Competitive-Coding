#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int th,thl,sum,n,d;
		cin>>th>>thl>>sum;
		n=((2*sum)/(th+thl));
		d=((thl-th)/(n-5));
		long long int a[n];
		a[0]=(th-2*d);
		cout<<n<<endl;
		cout<<a[0]<<' ';
		for(int i=1;i<n;i++)
		{
			a[i]=(a[0]+(i*d));
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}