#include<bits/stdc++.h>

using namespace std;
int div_num[100002];
void NOD(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
        {
            div_num[j]+=1;
        }
    }
}
int main()
{
    int n,i;
    cin>>n;
    NOD(n);
    for(i=1;i<=n;i++)
    {
        cout<<"Number of divisor of "<<i<<" is = "<<div_num[i]<<endl;
    }
    return 0;
}
