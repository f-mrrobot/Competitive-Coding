#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int x,y;
		cin>>x>>y;
		double d=(2*(sqrt((x*x)-(y*y))));
		cout<<fixed;
		cout<<setprecision(3)<<d<<endl;
	}
	return 0;
}