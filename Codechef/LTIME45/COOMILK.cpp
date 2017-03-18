#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        vector<string> v;
        int i;
        for(i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        if(v[n-1]=="cookie")
        {
            count=-200;
        }
        else
        {
        for(i=0;i<n-1;i++)
        {
                if(v[i]=="cookie" && v[i+1]!="milk")
                {
                    count=-200;
                    break;
                }
                else
                {
                    count++;
                }
        }
        }
        if(count==(n-1))
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
}
