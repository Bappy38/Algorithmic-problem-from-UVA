#include<bits/stdc++.h>

using namespace std;
int sod[1000002];
void SOD(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
        {
            sod[j]+=i;
        }
    }
}
int main()
{
    int n,i;
    cin>>n;
    SOD(n);
    for(i=1;i<=n;i++)
    {
        cout<<"Sum of divisors is = "<<sod[i]<<endl;
    }
    return 0;
}
