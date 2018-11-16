#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,carry,ans,d1,d2;
    while(1)
    {
        ans=0;
        carry=0;
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)
            break;
        while(a>0 || b>0)
        {
            d1=a%10;
            d2=b%10;
            carry += (d1+d2);
            carry /= 10;
            if(carry > 0)
                ans+=1;
            a/=10;
            b/=10;
        }
        if(ans == 1)
            printf("1 carry operation.\n");
        else if(ans == 0)
            printf("No carry operation.\n");
        else
            printf("%llu carry operations.\n",ans);
    }
    return 0;
}
