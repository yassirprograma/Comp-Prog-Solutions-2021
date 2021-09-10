#include <bits/stdc++.h>

using namespace std;

/*
int subarrays(vector <int> &v, int sum){

    int currsum=v[0], total=0;
    int l=0,r=0;

    while(l<v.size()){

        if(currsum==sum){
            total++;
            if(r+1<v.size()){
                r++;
                currsum+=v[r];
            }else {
                currsum-=v[l];
                l++;
            }

        }else {

            if(currsum<sum){

                if(r+1<v.size()){
                    r++;
                    currsum+=v[r];
                }

            }else{

                currsum-=v[l];
                l++;

            }
        }
    }


    return total;
}

*/


int subarraysnueva(vector <int> &v, int sum){
    int currsum=v[0], total=0;
    int l=0,r=0;

    while( l<v.size()){

        if(currsum==sum) total++;

        if(currsum<=sum && r+1<v.size()){
            r++;
            currsum+=v[r];
        }else {
            currsum-=v[l];
            l++;
        }

    }


    return total;
}

int main()
{



/* PARA HERD SUMS
    int sum;
    vector <int> v;
    //DE UNA ARRAY DE N ENTEROS, ENCONTRAR LA CANTIDAD DE SUBARRAYS CUYA SUMA ES IGUAL A X

    cin>>sum;

    for(int i=1;i<=sum;i++){

        v.push_back(i);
    }

    //cout<<subarrays(v,sum)<<endl;

     cout<<subarraysnueva(v,sum)<<endl;

¨*/



    int sum,n,k;
    vector <int> v;
    //DE UNA ARRAY DE N ENTEROS, ENCONTRAR LA CANTIDAD DE SUBARRAYS CUYA SUMA ES IGUAL A X

    cin>>n>>sum;

    for(int i=1;i<=n;i++){
        cin>>k;
        v.push_back(k);
    }

    //cout<<subarrays(v,sum)<<endl;

     cout<<subarraysnueva(v,sum)<<endl;



    return 0;
}
