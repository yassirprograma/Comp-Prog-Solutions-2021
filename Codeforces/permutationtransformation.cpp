#include <bits/stdc++.h>

using namespace std;


struct nodo{
    int value;
    short int parent;
    short int left;
    short int right;
};



int elemmayor(vector <int>&arreglo, int ini, int fin){ //ENCUENTRA LA POSICIÓN DEL ELEMENTO MAYOR EN UN RANGO DE UN ARREGLO DADO

    int numeromayor=arreglo[ini],posicionmayor=ini;
    for(int o=ini; o<=fin; o++){
        if(arreglo[o]>numeromayor){
            numeromayor=arreglo[o];
            posicionmayor=o;
        }
    }
    return posicionmayor;
}


void divide(vector <int>&arreglo, int ini, int fin){

    if(ini==fin){
        cout<<arreglo[ini];
        return;
    }else {
        int posmayoractual=elemmayor(arreglo,ini,fin);
        cout<<posmayoractual<<" "<<arreglo[posmayoractual]<<endl;

        divide(arreglo,ini,posmayoractual-1);

    }
}


int main (){

    vector <int> arreglo;
    int x,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        arreglo.push_back(x);
    }

    divide(arreglo,0,arreglo.size()-1);


/*
     cout<<elemmayor(arreglo,0,arreglo.size()-1)<<endl;
     cout<<elemmayor(arreglo,8,9)<<endl;
*/


    /*
10
4 3 1 2 5 7 10 12 11 8
    */



    return 0;
}
