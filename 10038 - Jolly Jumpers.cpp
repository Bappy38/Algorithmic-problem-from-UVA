#include<bits/stdc++.h>

using namespace std;
int mark[3000];
int main()
{
    int n,cnt=0,i,dif;
    while(scanf("%d",&n) != EOF)
    {
        cnt=0;
        for(i=1;i<=n;i++)
            mark[i]=0;
        int ara[n];
        for(i=0; i<n; i++)
            cin>>ara[i];
        for(i=1; i<n; i++)
        {
            dif=fabs(ara[i]-ara[i-1]);
            mark[dif]++;
        }
        for(i=1; i<n; i++)
        {
            if(mark[i]>0)
                cnt+=1;
        }
        if(cnt == (n-1))
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
    return 0;
}
