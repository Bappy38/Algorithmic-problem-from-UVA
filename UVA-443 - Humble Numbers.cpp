    /**
    Bismillahir Rahmanir Rahim
    MD. Iqbal Hossain Bappy
    Dept. of CSE, CoU
    **/

#include<bits/stdc++.h>

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
#define mx                      123456789
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

int dp[5850];

void fun(void)
{
    dp[1]=1;
    int k2,k3,k5,k7,nx2,nx3,nx5,nx7,mn;
    k2=1;
    k3=1;
    k5=1;
    k7=1;
    nx2=dp[k2]*2;
    nx3=dp[k3]*3;
    nx5=dp[k5]*5;
    nx7=dp[k7]*7;
    for(int i=2;i<=5850;i++)
    {
        mn=min(nx2,min(nx3,min(nx5,nx7)));
        dp[i]=mn;
        if(mn == nx2)
        {
            k2++;
            nx2=dp[k2]*2;
        }
        if(mn == nx3)
        {
            k3++;
            nx3=dp[k3]*3;
        }
        if(mn == nx5)
        {
            k5++;
            nx5=dp[k5]*5;
        }
        if(mn == nx7)
        {
            k7++;
            nx7=dp[k7]*7;
        }
    }
}
int main()
{
//    freopen("output.txt","w",stdout);
    int n;
    fun();
    while(1)
    {
        scin(n);
        if(n == 0)
            break;
        else if(n%100==11 || n%100==12 || n%100==13)
            pf("The %dth humble number is %d.\n",n,dp[n]);
        else if(n%10 == 1)
            pf("The %dst humble number is %d.\n",n,dp[n]);
        else if(n%10 == 2)
            pf("The %dnd humble number is %d.\n",n,dp[n]);
        else if(n%10 == 3)
            pf("The %drd humble number is %d.\n",n,dp[n]);
        else
            pf("The %dth humble number is %d.\n",n,dp[n]);
    }
    return 0;
}
