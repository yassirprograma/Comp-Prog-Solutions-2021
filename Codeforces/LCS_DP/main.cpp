#include <bits/stdc++.h>

using namespace std;



int memo[500][500];
bool yalotengo[500][500];

int LCS(int i, int j, string &cad1, string &cad2){
    /*nota cad1 y cad2 deben leerse a partir
        de la posición 1, es decir, la posición 0
        debe estar vacía
    */
    if(i==0 || j==0){
        return 0;
    }else {
        if(yalotengo[i][j]){
            return memo[i][j];
        }else {
            if (cad1[i-1] == cad2[j-1]) {
                    memo[i-1][j-1]=1+LCS(i-1,j-1,cad1,cad2);
                    yalotengo[i-1][j-1]=1;
                    return memo[i-1][j-1];
            }else{
                    memo[i-1][j-1]= max(LCS(i,j-1,cad1,cad2), LCS(i-1,j,cad1,cad2));
                    yalotengo[i-1][j-1]=1;
                    return memo[i-1][j-1];
            }

        }
    }
}




int main()
{

    return 0;
}
