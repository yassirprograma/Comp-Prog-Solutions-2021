#include <bits/stdc++.h>

using namespace std;

int sumamayor(vector <int>& xboxpoints){
    int l=0,r=0;
    int maxglobal=xboxpoints[0];
    int currentsum=xboxpoints[0];

    while(l<xboxpoints.size())
    {
        maxglobal=max(maxglobal,currentsum);
        if((currentsum>=0  || l==r ) && r<xboxpoints.size()-1){
            r++;
            currentsum+=xboxpoints[r];
            if(currentsum<xboxpoints[r]){
                currentsum=xboxpoints[r];
                l=r;
            }
        }else {
            currentsum-=xboxpoints[l];
            l++;
        }
    }

    return maxglobal;
}

int main()
{

    vector <int> xboxpoints;
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        xboxpoints.push_back(x);
    }
    cout<<sumamayor(xboxpoints)<<endl;

    return 0;
}
