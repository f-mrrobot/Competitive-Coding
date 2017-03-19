#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int value=0,i,k,count=0;
        string s;
        cin>>s>>k;
        int l=s.length();
        for(i=0;i<l;i++)
        {
            if(s[i]=='0' && k>0)
            {
                s[i]='1';
                k--;
            }
        }
        for(i=0;i<l;i++)
        {
            if(s[i]=='1')
            value+=pow(2,(l-i-1));
        }
        cout<<value<<endl;
    }
}