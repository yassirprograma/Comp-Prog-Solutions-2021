#include <bits/stdc++.h>

using namespace std;

int hashtable[102];


void limpia(){
    for(int j=1;j<=102;j++){
        hashtable[j]=0;
    }
}


int main()
{
    int t,n,v,menor=777;

    cin>>t;
    for(int i=1;i<=t;i++){
        limpia();
        menor=777;
        cin>>n;
        for(int k=1;k<=n;k++){
            cin>>v;
            menor=min(menor,v);
            hashtable[v]+=1;
        }

        //cout<<endl<<"**"<<hashtable[menor]<<"**"<<endl;
        cout<<n-hashtable[menor]<<endl;

    }



    return 0;
}


