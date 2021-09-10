#include <iostream>
using namespace std;

long long dp [2002][2002];
long long triominosDP(int h1, int h2, int m){
    long long x=0;

    if(dp[h1][h2]>0)return dp[h1][h2];
    if(h1>m || h2>m) return 0; //significa que no se logró

    if(h1==m && h2==m){
        return 1; //caso base
    }else{
        if(h1-h2==0){
            dp[h1][h2]+=triominosDP(h1+2,h2+1,m);
            dp[h1][h2]+=triominosDP(h1+1,h2+2,m);
            dp[h1][h2]+=triominosDP(h1+3,h2+3,m); //cuando esta parejo se ponen las dos juntas largas
            // asi la diferencia entre h1 y h2  siempre estará entre 0 y 2

        }else {
            if(h1-h2==1){ //h1>h2
                dp[h1][h2]+=triominosDP(h1+1,h2+2,m);
                dp[h1][h2]+=triominosDP(h1+0,h2+3,m);
            }else {
                if(h1-h2==-1){  //h1<h2
                    dp[h1][h2]+=triominosDP(h1+2,h2+1,m);
                    dp[h1][h2]+=triominosDP(h1+3,h2+0,m);
                }else {
                    if(h1-h2==2){ //h1>h2
                        dp[h1][h2]+=triominosDP(h1+0,h2+3,m);
                    }else {
                        if(h1-h2==-2){ //h1<h2
                            dp[h1][h2]+=triominosDP(h1+3,h2+0,m);
                        }
                    }
                }
            }
        }
    }

    x+=dp[h1][h2]; //memorizo

    return x%70000027;
}

int main()
{
    int m;
    cin>>m;
    cout<<triominosDP(0,0,m);
    return 0;
}
