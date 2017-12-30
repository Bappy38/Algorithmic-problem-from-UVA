/**F - Just Add & Subtract**/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i,j,k,n,q,x,y;
    char ch;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&n,&q);
        long long int a[n+1],res[q+1],sum[n+1];
        for(j=1;j<=n;j++)
        {
            scanf("%lld",&a[j]);
        }
        sum[0]=0;
        sum[1]=(a[1]%1000000007);
        for(j=2;j<=n;j++)
        {
            sum[j]=((sum[j-1]%1000000007)+(a[j]%1000000007))%1000000007;
        }
        for(j=1;j<=q;j++)
            res[j]=0;
        for(j=1;j<=q;j++)
        {
            cin>>ch>>x>>y;
            if(ch == '+')
            {
                res[j]=(sum[y]-sum[x-1])%1000000007;
                res[j]=(res[j]+1000000007)%1000000007;
            }
            else
            {
                res[j]=(a[x]-a[y])%1000000007;
                if(res[j]<0)
                {
                    res[j]=res[j]+1000000007;
                    res[j]=(res[j]%1000000007);
                }
            }
        }
        printf("Case %d:\n",i+1);
        for(j=1;j<=q;j++)
            printf("%lld\n",res[j]);
    }
    return 0;
}
