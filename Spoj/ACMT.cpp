#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int e,n,i=0,t=0;
		cin>>e>>n;
		long int k=((e+n)/3);
		while(i<k && e>0 && n>0)
		{
			if(e>n)
			{
				e-=2;
				n--;
				t++;
			}
			else if(n>e)
			{
				n-=2;
				e--;
				t++;
			}
			else
			{
				n-=2;
				e--;
				t++;
			}
			i++;
		}
		cout<<t<<endl;		
	}
}
