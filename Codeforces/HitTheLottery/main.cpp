#include <iostream>

//version recursiva
using namespace std;
int MinimumFirstBill(int n, int arr[], int i)
{
    if(arr[i]<=n){
        return arr[i];
    }else {
        return MinimumFirstBill(n,arr,i+1);
    }
}
int CambioMinimo(int n, int arr[]){
    if(n==0){
        return 0;
    }else {
        int x=MinimumFirstBill(n,arr,0);
        return (n/x)+CambioMinimo(n%x,arr);
    }
}
int main()
{
    int n;
    int arr[]={100,20,10,5,1};
    cin>>n;
    cout<<CambioMinimo(n,arr)<<endl;
    return 0;
}
