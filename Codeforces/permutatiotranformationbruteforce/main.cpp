#include <bits/stdc++.h>

using namespace std;

struct nodo{  //NODO PARA MI ARBOL
    short int parent;  //PARA GUARDAR SU PADRE
    short int left;   //SI TIENE HIJOS, LOS TENEMOS QUE GUARDAR
    short int right;
    nodo(){   //Con este constructor inicio todos mis nodos con -1
        parent=-1;
        left=-1;
        right=-1;
    }
};

int poselemmayor(vector <int>&arreglo, int ini, int fin){ //LA POSICIÓN DEL ELEMENTO MAYOR EN UN RANGO DE UN ARREGLO DADO

    int numeromayor=arreglo[ini],posicionmayor=ini;

    for(int o=ini; o<=fin; o++){
        if(arreglo[o]>numeromayor){
            numeromayor=arreglo[o];
            posicionmayor=o;
        }
    }
    return posicionmayor;
}

void insertanodoenarbol(int poshijo, int pospadre, vector <int>&arreglo ,vector <nodo>&arbol_adj){ //esta funcion recibe la posición del padre y del hijo y los conecta en el arbol
    int hijo=arreglo[poshijo];

    if(pospadre!=-1){  //si el padre es diferente de -1
        int padre=arreglo[pospadre];

            if(poshijo<pospadre)  //el hijo es izquierdo
                arbol_adj[padre].left=hijo;
            else  //el hijo es derecho
                arbol_adj[padre].right=hijo;


        arbol_adj[hijo].parent=padre;  //al final conectamos al hijo con su padre

    }else { //cuando el padre es -1 quiere decir que es la raiz total del arbol
        arbol_adj[hijo].parent=-1;
    }

}

void divide(vector <int>&arreglo, int ini, int fin, int pospadre, vector <nodo>&arbol_adj){  //ahora le mando la posicion de su padre
//EN CADA LLAMADA A ESTA FUNCION ES POSIBLE ENCONTRAR LA POSICIÓN DE UN ELEMENTO MAYOR (HIJO) Y CONECTARLO CON SU PADRE
    if(ini==fin){ //caso base, un arreglo o subarreglo de tamano 1, donde ya no hay subarreglos izquierdo ni derecho
        int posmayoractual=ini; //EL MAYOR ES EL UNICO ELEMENTO

        //conectemos al mayor actual con su padre
        insertanodoenarbol(posmayoractual,pospadre,arreglo,arbol_adj);

        return;
    }else if(ini<fin) {

            int posmayoractual=poselemmayor(arreglo,ini,fin); //este va a ser el padre de los dos subarreglos (subarboles) siguientes

            //pero antes de continuar, conectemos al mayor actual con su padre
            insertanodoenarbol(posmayoractual,pospadre,arreglo,arbol_adj);

            divide(arreglo,ini,posmayoractual-1,posmayoractual,arbol_adj); //llamada recursiva para el subarreglo (subarbol) izquierdo
            divide(arreglo,posmayoractual+1,fin, posmayoractual,arbol_adj); //llamadada recursiva para el subarreglo (subarbol) derecho
    }

}


int cuentanivel(int elemento,vector <nodo>&arbol_adj ){
    int padre=arbol_adj[elemento].parent;

    if(padre==-1){ //caso base, si el elemento tiene padre -1, entonces este es la raiz
        return 0;  //pues la raiz es nivel 0
    }else {
        return 1+cuentanivel(padre,arbol_adj); //caso recursivo, regreso 1 + el nivel del padre
    }
}

void caso(){

    vector <int> arreglo;  //PARA GUARDAR LOS N ELEMENTOS
    int x,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        arreglo.push_back(x);
    }

    vector <nodo> arbol_adj; //DECLARAMOS EL ARREGLO PARA LAS ADYACENCIAS DEL ARBOL
    arbol_adj.resize(n+2);

    divide(arreglo,0,arreglo.size()-1,-1,arbol_adj);  //DIVIDIMOS Y LLENAMOS EL ARBOL

    for(auto p:arreglo){
        cout<<cuentanivel(p,arbol_adj)<<" ";   //IMPRIMIMOS EL NIVEL DE CADA ELEMENTO
    }
    cout<<endl;

    //for(int j=1;j<=n;j++)cout<<arbol_adj[j].parent<<" "<<arbol_adj[j].left<<" "<<arbol_adj[j].right<<endl;

}

int main (){
    int t;
    cin>>t;
    while(t--) caso();

    /*
7
1 5 7 3 2 6 4
    */

    return 0;
}
