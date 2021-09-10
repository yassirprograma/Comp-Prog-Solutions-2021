#include <bits/stdc++.h>

using namespace std;

int usados[30];
int arr [30];
int main()
{
    long long int n,x,res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr[2]<<endl;

/*
    sort(arr,arr+n);
    for(int i=n-1; i>=0;i-- ){
        x=arr[i];
        if(usados[x]){
            while(usados[x]==1)
                x-=1;
            res+=x;
        }else {
            res+=x;
        }
        usados[x]=1;
    }

    cout<<res<<endl;
*/

    return 0;
}
