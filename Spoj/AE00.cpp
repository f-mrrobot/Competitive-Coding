#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	long int sum=0;
	cin>>n;
	int i=1;
	int p=floor(sqrt(n));
	for(i=1;i<=p;i++)
	{
		sum+=((n/i)-(i-1));
	}
	cout<<sum;
}