#include <bits/stdc++.h>

using namespace std;

int findternary(string &cadena){

    int c1=0, c2=0,c3=0,l=0,r=0,minsubcad=200002;

     if(cadena[r]=='1')c1++;   if(cadena[r]=='2')c2++;   if(cadena[r]=='3')c3++;

    while( l<cadena.size() ){
        if(c1>0 && c2>0 && c3>0)minsubcad=min( minsubcad , (r-l) +1  );


        if(( c1<1 || c2<1 || c3<1 ) && r+1<cadena.size()){
            r++;

            if(cadena[r]=='1')c1++;
            if(cadena[r]=='2')c2++;
            if(cadena[r]=='3')c3++;



        }else {
            if(cadena[l]=='1')c1--;
            if(cadena[l]=='2')c2--;
            if(cadena[l]=='3')c3--;

            l++;
        }



    }


    if(minsubcad==200002)minsubcad=0;
    return minsubcad;


}

int main()
{
    int t;
    string cadena;

    cin>>t; //cantidad de casos

    for(int i=1;i<=t;i++){
        cin>>cadena;
        cout<<findternary(cadena)<<endl;
    }




    return 0;
}
