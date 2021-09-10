#include <iostream>

using namespace std;

int main()
{
    int n,x,y,z,res=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>x>>y>>z;
        if((x&&y) ||(x&&z) || (y&&z) ) res++;
    }
    cout<<res<<endl;
    return 0;
}
