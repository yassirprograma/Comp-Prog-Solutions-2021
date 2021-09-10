#include <bits/stdc++.h>

using namespace std;
int arr[22][22];

int caminos;
void mario(int x, int y, int n, int sum, int menoract,int &maxneg){

    if(x==n && y==n) {
        maxneg=max(maxneg,menoract);
        menoract=INT_MAX;
        sum=0;
        caminos++;
        return ;
    }
    sum+=arr[x][y];
    if(sum<0) menoract=min(menoract,sum);

    if(x<n){
        mario(x+1,y,n,sum, menoract ,maxneg);
    }
    if(y<n){
        mario(x,y+1,n,sum,menoract,maxneg);
    }

}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j]; //0 para puntos
        }
    }
    char k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>k;
            if(k=='b')  arr[i][j]*=-1;
            // si es bowser, multiplico por -1 el valor
        }
    }

    int maxneg=INT_MIN;

    mario(1,1,n,0,INT_MAX,maxneg);
    cout<<caminos<<endl;
    if(maxneg>0)
        cout<<1;
    else
        cout<<(maxneg*-1)+1;

    return 0;
}
