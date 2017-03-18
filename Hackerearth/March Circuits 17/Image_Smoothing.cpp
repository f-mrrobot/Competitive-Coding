#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int k=2*m+1;
    int ar[k][k];
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        cin>>ar[i][j];
    }
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        a[i][j]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int sum=0,c=0,x=0;
            for(int x=i-(k-1)/2;x<=i+(k-1)/2;x++)
            {   
                if(x>=0 && x<n)
                {
                    int d=0;
                    for(int y=j-(k-1)/2;y<=j+(k-1)/2;y++)
                    {
                        if(y>=0 && y<n)
                        {
                            sum+=(ar[c][d]*arr[x][y]);
                        }
                        d++;
                    }
                }
                c++;
            }
            a[i][j]=sum;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}