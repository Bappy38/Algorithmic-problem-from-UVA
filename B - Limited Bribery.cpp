/**B - Limited Bribery**/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int T,x,i;
    scanf("%llu",&T);
    for(i=0;i<T;i++)
    {
        scanf("%llu",&x);
        x%=1000000007;
        if(x == 0)
            cout<<"1"<<endl;
        else
            cout<<x<<endl;
    }
    return 0;
}
