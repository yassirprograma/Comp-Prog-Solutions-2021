#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x,y, campos, h1,h2, sincampo=0, concampo=0;
    float divisor=0, f, res;
    cin>>x>>y>>campos;
    for(int i=1;i<=campos;i++){
        cin>>h1>>h2>>f;
        divisor+=(abs(h2-h1)*f);
        concampo+=abs(h2-h1);
    }
    sincampo=y-concampo;
    divisor+=sincampo;
    res=x/divisor;
    printf("%.10f\n",res);
    return 0;
}
