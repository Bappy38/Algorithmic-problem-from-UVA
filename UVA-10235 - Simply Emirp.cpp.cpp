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
string tostr(int n)
{
    string s="";
    while(n>0)
    {
        s+=((n%10)+'0');
        n/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

int power(int a,int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
        num*=a;
    return num;
}
int Reverse(string s)
{
    int num=0,temp,i;
    for(i=0;i<s.size();i++)
    {
        temp=(s[i]-'0');
        num+=(temp*power(10,i));
    }
    return num;
}

vector<int>prime;
int mark[10000009];

void sieve(int n)
{
    int sqrtN=sqrt(n*1.0)+2,i,j;
    mark[1]=1;
    prime.pb(2);
    for(i=4;i<=n;i+=2)
        mark[i]=1;
    for(i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            prime.pb(i);
            if(i<=sqrtN)
            {
                for(j=i*i;j<=n;j+=(2*i))
                    mark[j]=1;
            }
        }
    }
}
int main()
{
    sieve(10000000);
    int i,j,n,num;
    while(scin(n) != EOF)
    {
        string s;
        s=tostr(n);
        num=Reverse(s);
        if(mark[n] == 1)
            pf("%d is not prime.\n",n);
        else if(mark[n]==0 && mark[num]==0 && n!=num)
            pf("%d is emirp.\n",n);
        else
            pf("%d is prime.\n",n);
    }
    return 0;
}
