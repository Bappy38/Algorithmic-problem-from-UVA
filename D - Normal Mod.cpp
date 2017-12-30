/**D - Normal Mod**/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i,n,j;
    unsigned long long int sum;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        sum=0;
        scanf("%d",&n);
        unsigned long long int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%llu",&a[j]);
            sum=((sum%1000000007)+(a[j]%1000000007))%1000000007;
        }
        sum=sum%1000000007;
        printf("%llu\n",sum);
    }
    return 0;
}
