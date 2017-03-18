#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	label:
	cin>>a>>b>>c;
	if(a!=0 || b!=0 || c!=0)
	{
		if((b-a)==(c-b))
		{
			cout<<"AP"<<' '<<(c+(c-b))<<endl;
		}
		else
			cout<<"GP"<<' '<<((b/a)*c)<<endl;
		goto label;
	}
}
