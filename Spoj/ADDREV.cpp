#include <iostream>
using namespace std;
long int numRev(long int); 
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long int a,b,s=0;
		cin>>a>>b;
		long int x=numRev(a);
		long int y=numRev(b);
		s=(x+y);
		long int revsum=numRev(s);
		cout<<revsum<<endl;

	}
                         
}
long int numRev(long int x)
{
	long int r,reversedNumber=0;
	 while(x != 0)
    {
        r = x%10;
        reversedNumber = reversedNumber*10 + r;
        x /= 10;
    }
    return reversedNumber;

}
