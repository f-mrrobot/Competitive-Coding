#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		bool a[n];
		for(long int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		long int k=0,sum=0;
		for(long int i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				if(k==i)
					k++;
				else
				{
					sum+=100;
				}				
			}
			else if(a[i]==0)
			{
				sum+=1100;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
