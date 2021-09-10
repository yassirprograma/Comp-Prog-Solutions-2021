#include <bits/stdc++.h>

using namespace std;




int SubMasLargo(vector <int> &arr){
    int res=1,actual=1;

    for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[i-1]){
            actual++;
            res=max(actual,res);
        }else {
            actual=1;
        }
    }

    return res;
}


int main()
{
    vector <int> arr;

    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        arr.push_back(x);
    }

    cout<<SubMasLargo(arr)<<endl;
    return 0;
}
