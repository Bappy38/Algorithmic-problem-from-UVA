#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    stringstream ss;
    int ara[105],key=0,i,inp;
    getline(cin,str);
    ss<<str;
    while(ss>>inp)
    {
        ara[key++]=inp;
    }
    for(i=0;i<key;i++)
        cout<<ara[i]<<" ";
    return 0;
}
