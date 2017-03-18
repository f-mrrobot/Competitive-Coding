#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+m];
        memset(a,0,sizeof(a));
        a[n+m-1]=1;
        for(int i=0;i<n-1;i++)
        {
            a[i]=1;
        }
        long long int decimal=0;
        for(int i=0;i<m+n;i++)
        {
            if(a[i]==1)
            decimal+=(pow(2,i));
        }
        cout<<decimal;
        cout<<endl;
    }
}
