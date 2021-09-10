    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    const int MX = 300050;
    ll n, m, a[MX], ans, tmp, ps[MX], dp[MX];
    int main(){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            ps[i + 1] = ps[i] + a[i];

            cout<<"ps"<<i+1<<"->>>"<<ps[i + 1]<<" ";
        }
        cout<<endl;
        dp[0] = a[0] / 3;
        int x,y;
        for(int i = 1; i < n; i++){

            x=ps[i] - (dp[i - 1] * 3); //el acumulado hasta el actual, menos la cantidad de palitos de las ternas que agarraste en el pasado
            y=a[i] / 2; //la posición actual partida entre dos
            cout<<"x: "<<x<<"  y: "<<y<<endl;
            tmp = min(x,y);  //me quedo con  el menor
           // cout<<"tmp---->"<<tmp<<" ";

            dp[i] = dp[i - 1] +        tmp          +   (a[i] - (2 * tmp)) / 3;
            //       pasado   menorcantidaddepares       ternascompletasdelmismo
        }
        cout<<endl;

        for(int i=0;i<n;i++){
            cout<<"dp"<<i<<"---->"<<dp[i]<<" ";
        }




        cout<<endl << dp[n - 1];
    }
