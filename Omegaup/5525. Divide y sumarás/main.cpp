#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n;

    cin>>n;

    long long  pot=1, res=0;

    while(n>=pot){
        res+=n/pot;
        pot*=2;
    }
    cout<<res<<endl;

    return 0;
}
