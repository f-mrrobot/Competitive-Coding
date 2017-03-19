#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            ar[i][j]=1;
        }
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x=i,y=j;
                for(int k=0;k<s.length();k++)
                {
                    if(ar[i][j]==1)
                    {
                        if(s[k]=='R')
                        {
                            y++;
                            if(y>=m)
                            {
                            ar[i][j]=0;
                            break;
                            }
                        }
                        else if(s[k]=='L')
                        {
                            y--;
                            if(y<0)
                            {
                            ar[i][j]=0;    
                            break;
                            }
                        }
                        else if(s[k]=='U')
                        {
                            x--;
                            if(x<0)
                            {
                            ar[i][j]=0;
                            break;
                            }
                        }
                        else if(s[k]=='D')
                        {
                            x++;
                            if(x>=n)
                            {
                            ar[i][j]=0;
                            break;
                            }
                        }
                    }
                }
            }
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ar[i][j]==1)
                {
                flag=1;
                break;
                }
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        cout<<"safe"<<"\n";
        else
        cout<<"unsafe"<<"\n";
    }
}