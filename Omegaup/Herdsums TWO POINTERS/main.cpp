#include <bits/stdc++.h>

using namespace std;

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
    int sum;
    vector <int> v;

    cin>>sum;

    for(int i=1;i<=sum;i++){

        v.push_back(i);
    }

    cout<<subarraysnueva(v,sum)<<endl;

    return 0;
}
