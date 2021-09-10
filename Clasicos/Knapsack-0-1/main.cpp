#include <iostream>

using namespace std;

struct objeto{
    int p;
    int v;
    objeto (){
        p=0;
        v=0;
    }
};

objeto obj[1002];

bool yalotengo[1002][502];
int memo[1002][502];
int knap(int i, int cr, int n){

    if(i>n || cr<0){
        return 0;
    }else {

        if(yalotengo[i][cr]){
            return memo[i][cr];

        }else{
            if(obj[i].p>cr){
                memo[i][cr]=knap(i+1, cr, n);
                yalotengo[i][cr]=1;
                return memo[i][cr];
            }else {
                memo[i][cr]=max(   obj[i].v+knap( i+1 , cr-obj[i].p ,n)  ,  knap(i+1, cr, n)   );
                yalotengo[i][cr]=1;
                return memo[i][cr];
            }
        }

    }
}

int main(){

    int n,c,pesoi,valori;
    cin>>n>>c;

    for(int i=1;i<=n;i++){
        cin>>pesoi>>valori;
        obj[i].p=pesoi;
        obj[i].v=valori;
    }

    cout<<knap(1,c,n)<<endl;



    return 0;
}
