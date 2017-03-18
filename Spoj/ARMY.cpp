#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int gz,mgz,m1=0,m2=0,a;
		cin>>gz>>mgz;
		for(int i=1;i<=gz;i++)
		{
			cin>>a;
			if(a>m1)
				m1=a;
		}
		for(int i=1;i<=mgz;i++)
		{
			cin>>a;
			if(a>m2)
				m2=a;
		} 
		if(m1>=m2)
			cout<<"Godzilla"<<endl;
		else
			cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}