#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        switch(c)
        {
            case 'U':
            {
                long int index;
                long long int value;
                cin>>index>>value;
                if(index>=1 && index<=n)
                a[index-1]=value;
                else
                cout<<"NA"<<endl;
                break;
            }
            case 'A':
            {
                long int l,r,i;
                long long int sum=0;
                cin>>l>>r;
                if(l>=1 && r<=n)
                {
                    for(i=l-1;i<r;i++)
                    {
                        sum+=a[i];
                    }
                    cout<<sum<<endl;
                }
                else
                cout<<"NA"<<endl;
                break;
            }
            case 'M':
            {
                long int l,r,i;
                cin>>l>>r;
                if(l>=1 && r<=n)
                {
                    long long int max=0;
                    for(i=l;i<r;i++)
                    {
                        if(max<a[i])
                        max=a[i];
                    }
                    cout<<max<<endl;
                }
                else
                cout<<"NA"<<endl;
                break;
            }
            case 'm':
            {
                long int l,r,i;
                cin>>l>>r;
                if(l>=1 && r<=n)
                {
                    long long int min=1000000001;
                    for(i=l;i<r;i++)
                    {
                        if(min>a[i])
                        min=a[i];
                    }
                    cout<<min<<endl;
                }
                else
                cout<<"NA"<<endl;
                break;
            }
            case 'S':
            {
                long int l,r,i;
                cin>>l>>r;
                if(l>=1 && r<=n)
                {
                    long long int max=0,smax=0;
                    for(i=l-1;i<r;i++)
                    {
                        if(max<a[i])
                        {
                            smax=max;
                            max=a[i];
                        }
                        else if(smax<a[i])
                        {
                            smax = a[i];
                        }
                    }
                    cout<<smax<<endl;
                }
                else
                cout<<"NA"<<endl;
                break;
            }
            case 's':
            {
                long int l,r,i;
                cin>>l>>r;
                if(l>=1 && r<=n)
                {
                    long long int min=1000000001,smin=1000000001;
                    for(i=l-1;i<r;i++)
                    {
                        if(min>a[i])
                        {
                            smin=min;
                            min=a[i];
                        }
                        else if(smin>a[i])
                        {
                            smin=a[i];
                        }
                    }
                    cout<<smin<<endl;
                }
                else
                cout<<"NA"<<endl;                
                break;
            }
            default:
            {
                long int l,r;
                cin>>l>>r;
                cout<<"!!!"<<endl;
                break;
            }

        }
    }
}
