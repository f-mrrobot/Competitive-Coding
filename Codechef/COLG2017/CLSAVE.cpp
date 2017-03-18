#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long int s,total=0;
        cin>>n>>s;
        long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            total+=a[i];
        }
        if(total<=(s/2))
        cout<<"Yes";
        else
        cout<<"No";
        cout<<endl;
    }
}