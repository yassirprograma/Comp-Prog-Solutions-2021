#include <bits/stdc++.h>
#define mod 1000000
using namespace std;

long long memo[1002];
long long cuenta(int n){
    if(n==0 || n==1)return 1;
    if(memo[n])return memo[n];
    for(int i=0;i<n;i++)
        memo[n]+=(cuenta(n-1-i)*cuenta(i))%mod;

    return memo[n]%mod;
}
int main()
{
    int n;
    cin>>n;
    cout<<cuenta(n)<<endl;
    return 0;
}
