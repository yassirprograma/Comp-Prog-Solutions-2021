#include <bits/stdc++.h>

using namespace std;


void llenapfxsums(vector <int>& pfxsums,  vector <int>&values){
    int acum=0;
    for(int j=0;j<values.size();j++){
        acum+=values[j];
        pfxsums.push_back(acum);
    }
}

int query(int l, int r, vector <int>& pfxsums){
    int x,y;

    if(l==0){
        x=0;
    }else {
        x=pfxsums[l-1];
    }

    y=pfxsums[r];

    return y-x;



}

int main()
{
    vector <int>values;
    vector <int>pfxsums;

    int n,q,v,l,r;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>v;

        values.push_back(v);
    }


    llenapfxsums(pfxsums,values);

    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>l>>r;
        cout<<query(l,r,pfxsums)<<endl;

    }




    return 0;
}
