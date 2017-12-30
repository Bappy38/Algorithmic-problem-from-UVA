/** Complexity root(N) **/

#include<bits/stdc++.h>

using namespace std;
vector<int>divisor;
void div(int n)
{
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i == 0)
        {
            divisor.push_back(i);
            divisor.push_back(n/i);
        }
    }
    if((i*i == n) && (n%i == 0))
        divisor.push_back(i);
}
int main()
{
    int i,n;
    cin>>n;
    div(n);
    sort(divisor.begin(),divisor.end());
    for(i=0;i<divisor.size();i++)
        cout<<divisor[i]<<" ";
    cout<<"\n\n";
    return 0;
}
