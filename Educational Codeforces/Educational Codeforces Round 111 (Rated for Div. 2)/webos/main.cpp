#include <bits/stdc++.h>

using namespace std;
vector <pair<int,int>> hola;
vector <pair<int,int>> parejas;
int n,x,y,m,q;

int binsrchposition(int k)
{
    int lo=0;
    int hi=n-1;
    while(lo<hi)
    {
        int mid=(lo+hi)/2;
        if(k<=hola[mid].first)
        {
            hi=mid;
        }
        else
        {
            lo=mid+1;
        }
    }

    return lo;


}


int main()
{

    cin>>n>>m>>q;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        hola.push_back(pair<int,int>(x,y));
    }
    sort(hola.begin(), hola.end());

    for(int i=1;i<=q;i++){
        cin>>x>>y;
        parejas.push_back(pair<int,int>(x,y));
    }
    cout<<endl;
    for(auto p:hola){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
