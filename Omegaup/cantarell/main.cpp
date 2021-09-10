#include <bits/stdc++.h>

using namespace std;


int cantarell(vector <int> & arr, int i, int tipo1){
   if(i==tipo1) {
        return 0;
   }else {
       if(arr[i]==2){
            return 2+cantarell(arr,i+1,tipo1);
       }else {
           return cantarell(arr,i+1,tipo1);
       }
   }
}

int main()
{
    vector <int> barriles;
    int n,tipo1=0,tipo2=0,x;

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        barriles.push_back(x);
        if(x==1)tipo1++;
        else tipo2++;
    }

    cout<<cantarell(barriles,0, tipo1)<<endl;

    return 0;
}
