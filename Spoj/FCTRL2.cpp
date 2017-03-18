#include <iostream>
using namespace std;
#define max 500
int multi(int n, int a[],int size)
{
	int carry=0;
	for(int i=0;i<size;i++)
	{
		int p=(n*a[i]+carry);
		a[i]=p%10;
		carry=p/10;
	}
	while(carry)
	{
		a[size]=carry%10;
		carry/=10;
		size++;
	}
	return size;
}
void fact(int n)
{
	int a[max];
	a[0]=1;
	int size=1;
	for(int i=2;i<=n;i++)
	{
		size=multi(i,a,size);
	}
	for(int i=size-1;i>=0;i--)
	{
		cout<<a[i];
	}
	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		fact(n);
	}
}