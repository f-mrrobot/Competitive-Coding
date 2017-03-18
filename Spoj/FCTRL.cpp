#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	int i=1;
	while(t--)
	{
		long long int n,k=0,count=0;
		cin>>n;
		for(i=1;pow(5,i)<=n;i++)
		{

			long int k=(n/pow(5,i));
			count+=k;
		}
		cout<<count<<endl;
	}
}