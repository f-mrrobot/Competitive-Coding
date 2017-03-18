#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    int i=0;
    while(i<n)
    {
        cin>>s[i++];
    }
    int k;
    cin>>k;
    int r;
    r=k%26;
    for(i=0;i<n;i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                if((s[i]+(char)r)<='Z')
                    s[i]=(s[i]+(char)r);
                else
                {
                    int x=(r+(int)s[i])-26;
                    s[i]=(char)x;
                }
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                if((s[i]+(char)r)<='z')
                    s[i]=s[i]+(char)r;
                else
                {
                    int x=(r+(int)s[i])-26;
                    s[i]=(char)x;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i];
    }
}
