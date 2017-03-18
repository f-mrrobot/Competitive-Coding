#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int l=s.length();
        int a[26];
        for(int i=0;i<26;i++)
        {
            a[i]=0;
        }
        for(int i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                int x=((int)s[i]-65);
                a[x]++;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                int x=((int)s[i]-97);
                a[x]++;
            }
        }
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(a[i]>0 && a[i]%2!=0)
            count++;
        }
        if(count>1)
        cout<<"No"<<endl;
        else 
        cout<<"Yes"<<endl;
    }
}
