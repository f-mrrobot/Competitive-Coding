#include <iostream>
using namespace std;
int main()
{
	while(1)
	{
		long int n;
		cin>>n;
		if(n==0)
			break;
		long int c=0;
		for(int i=n;i>0;i--)
		{
				c+=(i*i);
		}
		cout<<c<<endl;
	}	
	
} 