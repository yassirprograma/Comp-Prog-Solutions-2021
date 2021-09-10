#include <bits/stdc++.h>

using namespace std;

long long t,n;

long long mintime(long long n){

    //int arr[][2]={{10,25},{12,30},{14,35},{16,40},{18,45},{20,50}};

    long long tiempo=0;

    long long  deadiez=(n/10)-1;

    if(deadiez>0)
        tiempo+=(25*deadiez);
    else
        deadiez=0;


    n-=(10*deadiez);

    int pos=6;
    int ti=15;

    while(n>pos && pos<20){
        pos+=2;
        ti+=5;
    }
   // cout<<"\t"<<deadiez<<"  "  <<n<<"    "<<pos<<endl;


    tiempo+=ti;

    return tiempo;

}

int main()
{
    cin>>t;


    if(t%2==0){
        n=pow(2,t/2);
        cout<<n<<endl;
    }
    else
        cout<<0<<endl;

    /*
    while(t--){
        cin>>n;
        cout<<mintime(n)<<endl<<endl;
    }*/

    return 0;
}
