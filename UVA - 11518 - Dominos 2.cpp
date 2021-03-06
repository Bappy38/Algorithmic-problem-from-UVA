/**
Bismillahir Rahmanir Rahim
MD. Iqbal Hossain Bappy
Dept. of CSE, CoU
**/

#include<bits/stdc++.h>
#include<queue>
#define perfect                 int main()
#define ll                      long long int
#define ull                     unsigned long long int
#define pii                     pair<int,int>
#define pll                     pair<ll,ll>
#define sc                      scanf
#define scin(x)                 sc("%d",&(x))
#define scln(x)                 sc("%lld",&(x))
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
#define MOD                     1000000007
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

int vis[10005];
vector<int>graph[10005];
void DFS(int start,int x)
{
    if(vis[start]==0 || vis[start]!=x)
    {
        vis[start]=x;
        for(int i=0;i<graph[start].size();i++)
        {
            int temp=graph[start][i];
            DFS(temp,x);
        }
    }
}
perfect
{
    int i,j,t,T,n,m,l,z,u,v,co;
    scin(T);
    RUN_CASE(t,T)
    {
        co=0;
        sc("%d %d %d",&n,&m,&l);
        for(i=0;i<m;i++)
        {
            sc("%d %d",&u,&v);
            graph[u].pb(v);
        }
        int x=1;
        for(i=0;i<l;i++)
        {
            scin(z);
            DFS(z,x++);
        }
        for(i=1;i<=n;i++)
        {
            if(vis[i] != 0)
                co+=1;
        }
        pf("%d\n",co);
        ms(vis,0);
        for(i=0;i<10005;i++)
            graph[i].clear();
    }
    return 0;
}

