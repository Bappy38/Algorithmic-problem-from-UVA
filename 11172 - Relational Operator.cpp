#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,i,a,b;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a<b)
            cout<<"<"<<endl;
        else if(a>b)
            cout<<">"<<endl;
        else
            cout<<"="<<endl;
    }
    return 0;
}
