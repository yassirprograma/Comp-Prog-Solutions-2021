#include <bits/stdc++.h>

using namespace std;

int partir(vector <int>&arr, int ini, int fin){
    int pivote=arr[fin];
    int i=ini;

    for(int j=ini;j<=fin;j++){ //recorro el arreglo y voy pasando los elementos menores, lo mas a la izquierda posible
        if(arr[j]<pivote){
            swap(arr[i],arr[j]); //si encuentro uno menor al pivote, lo paso lo mas a la izquierda posible
            i++;
        }
    }

    swap(arr[i],arr[fin]); //finalmente i se quedaa una posicion despues del ultimo elemento menor al pivote
                        //entonces al hacer swap entre el pivote y la posicion i, el pivote quedara en su lugar

    return i; //regreso la posicion donde quedo el pivote

}

void quicksort(vector <int>&arr, int ini, int fin ){
    int pivote=arr[fin];

    if(ini==fin){ //caso base cuando el arreglo es de tamano 1, entonces ya esta ordenado
        //nada por hacer
    }else if(ini<fin){ //caso recursivo
            int pivote=partir(arr,ini,fin);
            quicksort(arr,ini,pivote-1);
            quicksort(arr,pivote+1,fin);
    }
}
int main()
{

    vector <int> arr;
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        arr.push_back(x);
    }

    quicksort(arr,0,n-1);

    for(auto p:arr)cout<<p<<" ";



    return 0;
}
