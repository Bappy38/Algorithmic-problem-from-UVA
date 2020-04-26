#include<bits/stdc++.h>

#define Input                   freopen("in.txt","r",stdin)
#define Output                  freopen("out.txt","w",stdout)
#define ll                      long long int
#define ull                     unsigned long long int
#define pii                     pair<int,int>
#define pll                     pair<ll,ll>
#define sc                      scanf
#define scin(x)                 sc("%d",&(x))
#define scin2(x,y)              sc("%d %d",&(x),&(y))
#define scln(x)                 sc("%lld",&(x))
#define scln2(x,y)              sc("%lld %lld",&(x),&(y))
#define pf                      printf
#define all(a)                  (a.begin()),(a.end())
#define UNIQUE(X)               (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)          (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
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
#define intlimit                2147483690
#define longlimit               92233720368547758
#define infinity                (1<<28)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define mxx                     123456789
#define PI                      2*acos(0.0)
#define rep(i,a,b)              for(__typeof(i) i=a;i<=b;i++)
#define rev(i,a,b)              for(__typeof(i) i=a;i>=b;i--)

using namespace std;
/**     toint, tostring, BigMod, Power , sieve, Primefactorize ,frequency in n!     **/
//ll toint(string s){ll n=0,k=1;for(int i=s.size()-1; i>=0; i--){n += ((s[i]-'0')*k);k*=10;}return n;}
//string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}
//ll BigMod(ll a,ll b){if(b == 0)return 1%MOD;else if(b%2 == 0){ll temp=BigMod(a,b/2);return ((temp%MOD)*(temp%MOD))%MOD;}else{return ((a%MOD)*BigMod(a,b-1)%MOD)%MOD;}}
//ll Power(ll a,ll n){ll ret=1;for(ll i=1 ; i<=n ; i++)ret = ((ret%MOD)*(a%MOD))%MOD;return ret;}
//vector<ll>Prime;
//bool mark[10000003];
//void sieve(ll n){ll i,j;mark[1]=1;for(i=4; i<=n; i+=2)mark[i]=1;Prime.push_back(2);for(i=3; i<=n; i+=2){if(!mark[i]){Prime.push_back(i);if(i*i<=n){for(j=i*i; j<=n; j+=(i*2))mark[j]=1;}}}}
//map<ll,ll>Factor;
//void Primefactorize(ll n){for(ll i=0; i<Prime.size() && Prime[i]*Prime[i]<=n; i++){if(n%Prime[i] == 0){while(n%Prime[i] == 0){Factor[Prime[i]]++;n/=Prime[i];}}}if(n>1){Factor[n]++;}}
//ll frequency(ll n,ll factor)/** Frequency of a factor in n! **/{ll cnt=0;while(n){cnt += (n/factor);n /= factor;}return cnt;}
/**     Order Set       **/
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
//orderset<int> s ; //orderset<int>::iterator it ;
//orderset<int> X; //X.insert(1); //X.insert(2); //X.insert(4); //X.insert(8); //X.insert(16);
//cout<<*X.find_by_order(0)<<endl; // 2 //cout<<*X.find_by_order(2)<<endl; // 4 //cout<<*X.find_by_order(4)<<endl; // 16 //cout<<(end(X)==X.find_by_order(6))<<endl; // true
//cout<<X.order_of_key(-5)<<endl;  // 0 //cout<<X.order_of_key(1)<<endl;   // 0 //cout<<X.order_of_key(3)<<endl;   // 2 //cout<<X.order_of_key(4)<<endl;   // 2 //cout<<X.order_of_key(400)<<endl; // 5

inline int add(int a, int b) {a += b; return a >= MOD ? a - MOD : a;}
inline int sub(int a, int b) {a -= b; return a < 0 ? a + MOD : a;}
inline int mul(int a, int b) {return (ll) a * b % MOD;}
int Set(int N, int pos) {return  N = N | (1<<pos);}
int Reset(int N, int pos) {return  N = N & ~(1<<pos);}
bool Cheek(int N, int pos) {return  (bool)(N & (1<<pos));}

//string small = "abcdefghijklmnopqrstuvwxyz";
//string capital = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

///------------------Graph Moves-------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///King's move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///Knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///Knight's move

/** NOTE: Description of this problem is wrong. It will be
f(n) = Summation[i=1 ; i=k]( c[i] * f[n-i] ) + c[k+1] when k>=n

IF k = 4;

|  0  1  0  0  0  |   | f0     |   | f1     |
|  0  0  1  0  0  |   | f1     |   | f2     |
|  0  0  0  1  0  | * | f2     | = | f3     |
|  c4 c3 c2 c1 1  |   | f3     |   | f4     |
|  0  0  0  0  1  |   | c[k+1] |   | c[k+1] |

Here, every time k th row will be,
f[k] = c1.f[n-1] + c2.f[n-2] + --- + c[k].f[0]
**/

ll mod,con[25],ara[25];

struct matrix
{
    ll mat[25][25];
    int row,col;
};

matrix Mat_Mul(matrix &A,matrix &B)
{
    matrix C;
    C.row = A.row; C.col = B.col;
    for(int i=1 ; i<=C.row ; i++){
        for(int j=1 ; j<=C.col ; j++){
            ll sum = 0;
            for(int k=1 ; k<=A.col ; k++)
                sum = ((sum%mod) + (((A.mat[i][k]%mod) * (B.mat[k][j]%mod))%mod) ) %mod;
            C.mat[i][j] = sum;
        }
    }
    return C;
}

matrix Mat_Expo(matrix A,ll n)
{
    if(n == 1)
        return A;
    matrix ret = Mat_Expo(A , n/2);
    ret = Mat_Mul(ret , ret);
    if(n%2 == 0)
        return ret;
    else
        return Mat_Mul(ret , A);
}

void Solve(int t)
{
    ll i,j,k,m,n,ans;
    sc("%lld %lld %lld",&k,&mod,&n);
    for(i=1 ; i<=k+1 ; i++){
        scln(con[i]);
        if(con[i] < 0)
            con[i] = ((con[i]%mod)+mod)%mod;
    }
    for(i=0 ; i<k ; i++){
        scln(ara[i]);
        if(ara[i] < 0)
            ara[i] = ((ara[i]%mod)+mod)%mod;
    }
    if(k == 0){
        pf("%lld\n",con[k+1]%mod);
        return;
    }
    else if(n < k){
        pf("%lld\n",ara[n]%mod);
        return;
    }

    matrix A,B,ret;
    A.row = A.col = k+1;
    for(i=1 ; i<=A.row ; i++){
        for(j=1 ; j<=A.col ; j++)
            A.mat[i][j] = 0;
    }
    for(i=1 ; i<k ; i++)
        A.mat[i][i+1] = 1;
    for(i=1,j=k ; i<=k ; i++,j--)
        A.mat[k][i] = con[j];
    A.mat[k][k+1] = 1;
    A.mat[k+1][k+1] = 1;

    B.row = k+1; B.col = 1;
    for(i=0 ; i<k ; i++)
        B.mat[i+1][1] = ara[i];
    B.mat[k+1][1] = con[k+1];

    ret = Mat_Expo(A , n);

    ret = Mat_Mul(ret , B);

    pf("%lld\n",ret.mat[1][1]);
}

int main()
{
    int t,T;
    scin(T);
    RUN_CASE(t,T)
    {
        Solve(t);
        if(t != T)
            pf("\n");
    }
    return 0;
}

