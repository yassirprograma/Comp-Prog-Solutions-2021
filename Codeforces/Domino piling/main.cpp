#include <iostream>

using namespace std;
//https://codeforces.com/problemset/problem/50/A
int main()
{
    int n,m;
    cin>>m>>n;



    if(!(n%2) || !(m%2)){
        cout<<(n*m)/2<<endl;
    }else {
        cout<<((n*(m-1))/2)+(n/2)<<endl;
    }

    return 0;
}
