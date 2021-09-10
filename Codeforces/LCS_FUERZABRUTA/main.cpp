#include <bits/stdc++.h>
using namespace std;

void creasubs(int i, string subactual, vector<string>&subs, string &cadenasimb ){
    if(i>(cadenasimb.size()-1)){
        subs.push_back(subactual);
    }else {
        creasubs(i+1, subactual, subs, cadenasimb); //no toma

        subactual.push_back(cadenasimb[i]);          // toma
        creasubs(i+1, subactual, subs, cadenasimb);
    }
}


int obtenLCS(vector<string>&subscad1, vector<string>&subscad2){
    int maxlong=-1;
    int longitud=0;
    for(int i=0 ;i<subscad1.size();i++){
        for(int j=0 ;j<subscad2.size();j++){
            if(subscad1[i]==subscad2[j]){
                longitud=subscad1[i].size();
                maxlong=max(maxlong, longitud);
            }
        }
    }
    return maxlong;
}


  //string maxima;
    //         maxima=subscad1[i];


int main()
{
    string cad1,cad2,aux;
    vector<string>subscad1;
    vector<string>subscad2;

    getline(cin, cad1 );
    getline(cin, cad2 );

    creasubs(0,aux,subscad1, cad1);
    creasubs(0, aux, subscad2,cad2);
/*
    for(auto p:subscad1){
        if(p=="") cout<<"epsilon"<<endl;
         else cout<<p<<endl;
    }
    cout<<endl;
    for(auto p:subscad2){
        if(p=="") cout<<"epsilon"<<endl;
         else cout<<p<<endl;
    }
*/


    cout<<obtenLCS(subscad1,subscad2)<<endl;

    return 0;
}
