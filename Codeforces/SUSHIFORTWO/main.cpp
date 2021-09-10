#include <bits/stdc++.h>

using namespace std;

int  respuesta(vector <int>& largosecuencias ){
     int maxglobal=0,largoactual=0;

     for(int i=0;i<largosecuencias.size()-1;i++){
        largoactual=(min(largosecuencias[i],largosecuencias[i+1]))*2  ;
        maxglobal=max(largoactual,maxglobal);
     }
     return maxglobal;
}



int main()
{
    //ios_base::sync_with_stdio(0); cin.tie();

    vector <int> largosequencias;

    int n,anterior,x,cont=1;

    cin>>n;

    for(int i=1;i<=n;i++){

        cin>>x;

       if(i==1){

       }else {
           if(anterior!=x){

                largosequencias.push_back(cont);
                cont=1;
           }else {
               cont++;
           }
       }
        anterior=x;

    }
    largosequencias.push_back(cont); //se mete el ultimo


    cout<<respuesta(largosequencias)<<endl;





    return 0;
}
