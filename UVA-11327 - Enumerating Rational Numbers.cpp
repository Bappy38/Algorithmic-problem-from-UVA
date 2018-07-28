/**
Bismillahir Rahmanir Rahim
MD. Iqbal Hossain Bappy
Dept. of CSE, CoU
**/

#include<bits/stdc++.h>

#define perfect                 int main()
#define ll                      long long int
#define ull                     unsigned long long int
#define pii                     pair<int,int>
#define pll                     pair<ll,ll>
#define sc                      scanf
#define scin(x)                 sc("%d",&(x))
#define scin2(x)                sc("%d %d",&(x),&(y))
#define scln(x)                 sc("%lld",&(x))
#define scln2(x)                sc("%lld %lld",&(x),&(y))
#define pf                      printf
#define ms(a,b)                 memset(a,b,sizeof(a))
#define pb(a)                   push_back(a)
#define mp                      make_pair
#define db                      double
#define EPS                     10E-10
#define ff                      first
#define ss                      second
#define sqr(x)                  (x)*(x)
#define vi                      vector<int>
#define vl                      vector<ll>
#define vii                     vector<vector<int> >
#define vll                     vector<vector<ll> >
#define DBG                     pf("HI\n")
#define MOD                     100000007
#define CIN                     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define RUN_CASE(t,T)           for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)                 printf("Case %d: ",t)
#define CASEl(t)                printf("Case %d:\n",t)
#define intlimit                2147483647;
#define longlimit               9223372036854775808
#define infinity                (1<<28)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define mxx                     123456789
#define PI                      2*acos(0.0)
#define rep(i,a,b)              for(__typeof(i) i=a;i<=b;i++)
#define rev(i,a,b)              for(__typeof(i) i=a;i>=b;i--)

using namespace std;

///------------------Graph Moves-------------------
/// const int fx[] = {+1,-1,+0,+0};
/// const int fy[] = {+0,+0,+1,-1};
/// const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
/// const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///King's move
/// const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///Knight's move
/// const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///Knight's move

ll phi[10000005],mark[10000005];
ll ara[10000005];
void sievephi(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        phi[i]=i;
    phi[1]=1;
    mark[1]=1;
    for(i=2;i<=n;i++)
    {
        if(!mark[i])
        {
            for(j=i;j<=n;j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

ll Bin(ll item)
{
    ll res=1,lo=1,hi=1000005,mid;
    while(lo <= hi)
    {
        mid=(lo+hi)/2;
        if(item == ara[mid])
        {
            res=mid;
            break;
        }
        else if(item < ara[mid])
        {
            res=mid;
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }
    }
    return res;
}
int main()
{
    sievephi(1000005);
    ll i,j,t,T,n,g,lb,ub,pos,loc,k,x;
    ara[1]=1+phi[1];
    for(i=2;i<=10000000;i++)
    {
        ara[i]=phi[i]+ara[i-1];
    }
    while(1)
    {
        scln(n);
        x=1;
        if(n == 0)
            break;
        k=0;
        pos=Bin(n);
        if(ara[pos] == n)
            loc=ara[pos]-ara[pos-1];
        else
            loc=n-ara[pos-1];
        for(i=1;i<pos;i++)
        {
            if(k == loc)
                break;
            if(gcd(pos,i) == 1)
            {
                k++;
                x=i;
            }
        }
        if(n == 1)
            pf("0/1\n");
        else
            pf("%lld/%lld\n",x,pos);
    }
    return 0;
}

