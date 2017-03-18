#include <bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		long int n;
		cin>>n;
		if(n==-1)
			break;
		else
		{
			long int a[n],c=0;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
				c+=a[i];
			}
			long int count=0,d=(c/n);
			if(c%n!=0)
				cout<<-1<<endl;
			else
			{
				for(int i=0;i<n;i++)
				{
					if(a[i]<=d)
						count+=(d-a[i]);
					else
						count+=(a[i]-d);
				}
				cout<<count/2<<endl;
			}
		}
	}
	return 0;
}