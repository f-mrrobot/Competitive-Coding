#include <iostream>
using namespace std;
int main()
{
	unsigned long long int a[75];
	int j=2;
	a[0]=0;
	a[1]=1;
	while(j<75)
	{
		a[j]=a[j-1]+a[j-2];
		j++;
	}
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int m,sum,kms=0;
		cin>>m;
		sum=m;
		int i=74;
		while(sum>0 && i>=0)
		{
			if(sum>=a[i])
			{
				sum-=a[i];
				kms+=a[i+1];
			}
			i--;
		}
		cout<<kms<<endl;
	}
}
