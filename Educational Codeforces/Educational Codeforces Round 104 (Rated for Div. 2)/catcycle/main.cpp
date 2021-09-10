#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,aux1,aux2;
    cin>>t;


    for(int i=1;i<=t;i++){
        cin>>n>>k;
        if(n%2==0){
            cout<<  (  (k-1)%n ) +1 <<endl;
        }else {
            aux1=n/2;
            aux2=(k-1)/aux1;
            k=k+aux2;
            if(k%n==0){
                cout<<n<<endl;
            }else {
                cout<<k%n<<endl;
            }


        }
    }

    return 0;
}
