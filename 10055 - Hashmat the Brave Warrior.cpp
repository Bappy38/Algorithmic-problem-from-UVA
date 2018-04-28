#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,dif;
    while(scanf("%lld %lld",&a,&b) != EOF)
    {
        dif=fabs(a-b);
        cout<<dif<<endl;
    }
    return 0;
}
