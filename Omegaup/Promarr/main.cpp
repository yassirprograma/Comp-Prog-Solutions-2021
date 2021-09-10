#include <iostream>
using namespace std;
long long sum(long long n){
    return (n*(n+1))/2;
}
int main(){
    long long n,x;
    cin>>n;
    n=sum(n)+1;
    n/=2;
    cout<<n<<endl;
    return 0;
}
