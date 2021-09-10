#include <iostream>

using namespace std;


int findminimunsize(int s){
    int res=1;
    int take=1;
    int remain=s-1;

    while(remain>0){
        if(take+2<=remain){
            take=take+2;
            remain-=take;
            res++;
        }else {
            if(take+1<=remain){
                take=take+1;
                remain-=take;
                res++;
            }else{
                take=remain;
                remain-=take;
                res++;
            }
        }
    }
    return res;
}
int main()
{
    int t=0,s=0;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<findminimunsize(s)<<endl;
    }



    return 0;
}
