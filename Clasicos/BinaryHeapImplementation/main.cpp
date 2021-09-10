#include <bits/stdc++.h>

using namespace std;

struct minheap {
    vector <int> arr;


    minheap(){
        arr.push_back(0); //la posicion cero se ignora
        //el areglo sera 1-indexado
    }

    int padre(int i){
        return i/2;
    }

    int hizq(int i){
        return (2*i);
    }

    int hder(int i){
        return (2*i)+1;
    }

    void inserta(int x){
        arr.push_back(x);
        int k=arr.size()-1;
        while(arr[k]<arr[padre(k)]  && k>=1){
            swap(arr[k],arr[padre(k)]);
            k=padre(k);
        }

    }

    void bajaelim(int k){
        int hijomen;

        if(hder(k)<arr.size() && arr[hder(k)]<arr[k]  && arr[hder(k)]<=arr[hizq(k)]){
            hijomen=hder(k);
            swap(arr[k],arr[hijomen]);
            bajaelim(hijomen);
        }else {
            if(hizq(k)<arr.size() && arr[hizq(k)]<arr[k] && arr[hizq(k)]<=arr[hder(k)] ){
                hijomen=hizq(k);
                swap(arr[k],arr[hijomen]);
                bajaelim(hijomen);
            }else {
                //no hay hijo o ya no conviene bajar
                return; //ahi muere  este es el caso base
            }
        }

    }
    void elimina(){
        swap(arr[1],arr[arr.size()-1]);
        arr.pop_back();
        bajaelim(1);
    }

    int menor(){
        if(arr.size()>1)
            return arr[1];
        else
            return INT_MIN;
    }

    void imprimeheap(){
        for(int i=1;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    minheap prueba;


    prueba.inserta(10);
    prueba.inserta(5);
    prueba.inserta(3);
    prueba.inserta(1);
    prueba.inserta(0);
    prueba.inserta(4);

    prueba.imprimeheap();

    prueba.elimina();
    prueba.imprimeheap();
    prueba.elimina();
    prueba.imprimeheap();
/*
    prueba.inserta(7);
    prueba.inserta(5);
    prueba.inserta(1);
    prueba.imprimeheap();
*/


    return 0;
}
