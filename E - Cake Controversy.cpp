/**https://vjudge.net/contest/206108#problem/E**/

#include<bits/stdc++.h>

using namespace std;
unsigned long long int m=1000000007;
unsigned long long int big_mod(unsigned long long int a,unsigned long long int b)
{
    if(b==0)
        return 1;
    if(b%2 == 0)
    {
        long long int temp=big_mod(a,b/2);
        return (((temp%m)*(temp%m))%m);
    }
    else
    {
        return (((a%m)*big_mod(a,b-1)%m)%m);
    }
}
int main()
{
    unsigned long long int i,T,area,n,a,x;
    scanf("%llu",&T);
    for(i=0;i<T;i++)
    {
        cin>>n;
        a=n+1;
        area=((n%m)*(a%m))%m;
        x=big_mod(3,1000000005);
        area=((area*x)%m)%m;
        cout<<area<<endl;
    }
    return 0;
}
