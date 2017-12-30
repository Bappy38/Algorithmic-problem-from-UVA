/** Complexity n(log(n)). This code can calculate divisors of all number from 1 to n**/

#include<bits/stdc++.h>

using namespace std;
vector<int>divisor[1000002];
void div(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
        {
            divisor[j].push_back(i);
        }
    }
}
int main()
{
    int i,j,n;
    cin>>n;
    div(n);
    for(i=1;i<=n;i++)
    {
        cout<<"Divisors of "<<i<<" is:\n";
        sort(divisor[i].begin(),divisor[i].end());
        for(j=0;j<divisor[i].size();j++)
        {
            cout<<divisor[i][j]<<" ";
        }
        cout<<"\n\n";
    }
    return 0;
}
