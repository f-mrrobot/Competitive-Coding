#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k=1,i=0;
		cin>>n;
		long long int a[n],sum=0;
		while(i<n)
		{
			cin>>a[i];
			i++;
		}
		i=1;
		long long int s=a[0];
		while(i<n)
		{
			
			sum+=(a[i]*i)-s;
			s+=a[i];
			i++;
		}
		cout<<sum<<endl;

	}
}
