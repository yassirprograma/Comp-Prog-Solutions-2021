#include <bits/stdc++.h>

using namespace std;

void gira(int inicio, int fin, string &mensaje){
    while(inicio<fin){
        swap(mensaje[inicio],mensaje[fin]);
        inicio++;
        fin--;
    }
}



int main()
{

    ios::sync_with_stdio(false);  cin.tie(nullptr); cout.tie(nullptr);

    string mensaje,mensajenobrackets;
    stack <int> apertura;
    int lastcerradura=0, lastapertura=0 ;



    getline(cin, mensaje);

    for(int i=0;i<mensaje.size();i++){

        if(mensaje[i]=='('){
            apertura.push(i);
        }

        if(mensaje[i]==')'){
            lastcerradura=i;
            lastapertura=apertura.top();

            gira(lastapertura,lastcerradura,mensaje);

            apertura.pop();
            //cout<<mensaje<<endl;
        }

    }



    for(int i=0;i<mensaje.size();i++){
        if(mensaje[i]!='(' && mensaje[i]!=')'){


                mensajenobrackets.push_back(mensaje[i]);
        }

    }

    cout<<mensajenobrackets<<endl;;

    return 0;
}
