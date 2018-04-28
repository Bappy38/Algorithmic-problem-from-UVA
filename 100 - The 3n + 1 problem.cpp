#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,len,temp,mx,i,j,up,low;
    while(scanf("%d %d",&n,&m) != EOF)
    {
        mx=0;
        up=max(n,m);
        low=min(n,m);
        for(i=low; i<=up; i++)
        {
            len=0;
            temp=i;
            while(1)
            {
                len+=1;
                if(temp == 1)
                    break;
                else if(temp%2 == 0)
                    temp/=2;
                else if(temp%2 != 0)
                    temp=(3*temp)+1;
            }
            mx=max(mx,len);
        }
        printf("%d %d %d\n",n,m,mx);
    }
    return 0;
}
