    #include<iostream>
    using namespace std;
    int main()
    {
        long int t;
        scanf("%d",&t);
        while(t--)
        {
            long long int n,m,value=0,val=0,count=0,i;
            scanf("%lld%lld",&n,&m);
            long long int ar[n];
            for(i=0;i<n;i++)
            scanf("%lld",&ar[i]);
            for(i=0;i<n;i++)
            {
                if(ar[i]<=m)
                {
                    val+=ar[i];
                }
                else
                {
                    if(val>value)
                    value=val;
                    val=0;
                }
            }
            if(val>value)
            printf("%lld\n",val);
            else
            printf("%lld\n",value);
            
        }
    }