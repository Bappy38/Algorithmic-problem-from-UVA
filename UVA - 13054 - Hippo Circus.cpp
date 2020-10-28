#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,T;
    cin>>T;

    for(t=1 ; t<=T ; t++){
        deque<int>dq;
        vector<int>v;
        int i,j,k,n,x,ans,h,sngl,dbl;

        cin>>n>>h>>sngl>>dbl;
        for(i=1 ; i<=n ; i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin() , v.end());
        for(auto it : v)
            dq.push_back(it);

        if(2*sngl <= dbl){
            printf("Case %d: %d\n",t,n*sngl);
            continue;
        }

        ans = 0;
        while(dq.size() >= 2){
            int sml = dq.front();
            int big = dq.back();

            if(sml+big < h){
                ans += dbl;
                dq.pop_front();
                dq.pop_back();
            }
            else{
                ans += sngl;
                dq.pop_back();
            }
        }
        if(!dq.empty()){
            ans += sngl;
            dq.pop_back();
        }
        printf("Case %d: %d\n",t,ans);
    }

    return 0;
}
