#include <bits/stdc++.h>

using namespace std;

#define k INT_MAX

bool visit[102][102][102];
long long dp [102][102][102];

long long f(int a,int b, int c,int &llamadas){
    if(!visit[a][b][c]){
        if(min(min(a,b),c)<=3){
            dp[a][b][c]=(a+(2*b)%k+(3*c)%k)%k;
            visit[a][b][c]=1;
            return dp[a][b][c];
        }else {
            if(a+b+c==100){
                dp[a][b][c]=0;
                visit[a][b][c]=1;
                return dp[a][b][c];
            }else {
                return (  f(a-1,b-1,c-1,llamadas)%k+f(a,b-3,c-3,llamadas)%k+f(a/2,b,c,llamadas)%k );
            }
        }

    }else {
        llamadas--;
        return dp[a][b][c];
    }
}

int burris(){
    int llamadas=0;
    for(int i=0;i<=102;i++){
        for(int j=0;j<=102;j++){
            for(int t=0;t<=102;t++)
            {
                if(visit[i][j][t])llamadas++;
            }
        }
    }
    return llamadas;
}


int main()
{

    int a,b,c,llamadas=0;

    cin>>a>>b>>c;

    cout<<f(a,b,c,llamadas)<<" ";
    cout<<burris()<<endl;

    return 0;
}
