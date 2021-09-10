#include <iostream>

using namespace std;


long long memo [30][30];
long long caminos (int x, int y){

    if(memo[x][y])return memo[x][y];

    if(x==0 && y==0)return 1;

    if(x>0){
        memo[x][y]+=caminos(x-1,y);
    }

    if(y>0){
        memo[x][y]+=caminos(x,y-1);
    }
    return memo[x][y];
}
int main()
{

    int n;
    cin>>n;
    cout<<caminos(n,n)<<endl;

    return 0;
}
