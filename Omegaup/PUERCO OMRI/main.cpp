#include <bits/stdc++.h>

using namespace std;

int hashtable[28];

int changetoalphabet(char k) {  return (int) k-64;  }

int estantodos(vector <int> &hijo){
    int ok=1;
    int valnum;
    for(int i=0;i<hijo.size();i++){
        valnum=hijo[i];
        if(hashtable[valnum]<=0)ok=0;
    }
    return ok;
}

int barridotwopointers(vector <int>& madre, vector <int>& hijo ){
    int tamenor=2000000; //tamano menor del arreglo
    int l=0,r=0;

    int valor=madre[0];
    hashtable[valor]++;

    while(l<madre.size()){

        if( ( (r-l)+1 )>=hijo.size() ){
            if(estantodos(hijo)){
                tamenor=min(tamenor,(r-l)+1);
            }
        }

        if( (!estantodos(hijo) ) && r+1<madre.size() ){
            r++;
            valor=madre[r];
            hashtable[valor]++;
        }else {
            valor=madre[l];
            hashtable[valor]--;
            l++;
        }
    }

    return tamenor;


}

int main()
{
    char k;
    int n,m,ascii;

    vector <int> madre;
    vector <int> hijo;

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        ascii=changetoalphabet(k);
        madre.push_back(ascii);
    }

    cin>>m;

    for(int i=1;i<=m;i++){
        cin>>k;
        ascii=changetoalphabet(k);
        hijo.push_back(ascii);
    }

    cout<<barridotwopointers(madre,hijo)<<endl;

    return 0;
}
