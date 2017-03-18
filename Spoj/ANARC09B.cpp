#include <bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		long long int w,h;
		cin>>w>>h;
		if(h==0 && w==0)
			break;
		else
		{
			long long int k=__gcd(w,h);
			long long int c=((w*h)/(k*k));
			cout<<c;
		}
		cout<<endl;
	}
	return 0;
}
