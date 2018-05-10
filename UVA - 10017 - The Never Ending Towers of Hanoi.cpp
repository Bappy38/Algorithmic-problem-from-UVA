
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

vector<int> A, B, C;

int key;

void Print(vector<int> X)
{
    int p = X.size();
    for(int i = 0; i < p ; i++)
    {
        if(i>0)
            pf(" ");
        pf("%d",X[i]);
    }
    pf("\n");
}

void Tower(int n, int a, int b, int c, int m)
{
    if(n>=1)
    {
        Tower(n-1, a, c, b, m);
        if(key >= m)
            return;
        int p;
        if(a==1)
        {
            p = A.size();
            p = A[p-1];
            A.pop_back();
            if(c==2)
                B.push_back(p);
            else if(c==3)
                C.push_back(p);
        }
        if(a==2)
        {
            p = B.size();
            p = B[p-1];
            B.pop_back();
            if(c==1)
                A.push_back(p);
            else if(c==3)
                C.push_back(p);
        }
        if(a==3)
        {
            p = C.size();
            p = C[p-1];
            C.pop_back();
            if(c==1)
                A.push_back(p);
            else if(c==2)
                B.push_back(p);
        }
        pf("\n");
        pf("A=>");
        if(!A.empty())
            pf("   ");
        Print(A);
        pf("B=>");
        if(!B.empty())
            pf("   ");
        Print(B);
        pf("C=>");
        if(!C.empty())
            pf("   ");
        Print(C);
        key++;
        Tower(n-1, b, a, c, m);
    }
}

int main()
{
    int n,m,temp,T=0;
    while(1)
    {
        scin(n);
        scin(m);
        if(n==0 && m==0)
            break;
        temp=n;
        A.clear();
        B.clear();
        C.clear();
        for(int i = 0; i < n; i++)
            A.push_back(n-i);
        n = log2(m) + 1;
        if(T>0)
            puts("");
        pf("Problem #%d\n\n",++T);
        pf("A=>   ");
        Print(A);
        pf("B=>\n");
        pf("C=>\n");
        key = 0;
        if(temp%2 == n%2)
            Tower(n,1,2,3,m);
        else
            Tower(n,1,3,2,m);
    }
    printf("\n");
    return 0;
}
