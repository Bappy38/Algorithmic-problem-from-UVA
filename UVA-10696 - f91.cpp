#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n>=101)
        return n-10;
    else if(n<=100)
        return fun(fun(n+11));
}

int main()
{
    int n,co;
    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
            break;
        else
            co=fun(n);
        printf("f91(%d) = %d\n",n,co);
    }
    return 0;
}
