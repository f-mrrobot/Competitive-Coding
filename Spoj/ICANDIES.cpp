#include <iostream>
using namespace std;
 
int main() {
	long int t,i=1;
	cin>>t;
	while(i<=t)
	{
		long int n,sami=0,sara;
		cin>>n;
		while(n>5)
		{
			if((n-5)%3==0)
			{
				sami+=5;
				n=n-5;
				break;
			}
			else
			{
				sami+=5;
				n=n-5;
			}
		}
		sara=n;
		if(sami!=0 && sara%3==0)
			cout<<"Case "<<i<<": "<<sara<<endl;
		else
			cout<<"Case "<<i<<": "<<-1<<endl;
			i++;
	}
	return 0;
} 
