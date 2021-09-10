#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie();

    queue <int> filacanguros;




    int n,comida, cantidadformada=0;
    char action;
    int nuevo;


    cin>>comida>>n;

    for(int i=1;i<=n;i++){
        cin>>action;



        if(action=='N'){

                cin>>nuevo;
                filacanguros.push(nuevo);
                cantidadformada++;
        }

        if(action=='A'){
            comida=comida-( filacanguros.front() + 1);
            filacanguros.pop();
            cantidadformada--;
        }

        if(action=='C'){
            cout<<cantidadformada<<endl;
        }

        if(action=='R'){
            cout<<comida<<endl;
        }



    }

    cout<<endl;




    return 0;
}
