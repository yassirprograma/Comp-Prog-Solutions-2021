#include <bits/stdc++.h>

using namespace std;
void caso(){
    deque <int> sequence;
    int n,v;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>v;
        sequence.push_back(v);
    }


     for(int i=0;i<n;i++){

        if(i%2==0) {
            cout<<sequence.front()<<" ";
            sequence.pop_front();
        }else {
            cout<<sequence.back()<<" ";
            sequence.pop_back();

        }


    }
    cout<<endl;

}
int main()
{


    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        caso();
    }

    return 0;
}
