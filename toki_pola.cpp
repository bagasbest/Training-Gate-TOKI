#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,n,k;

    cin>>n>>k;

    for(i=1; i<=n; i++){
        if(i%k==0){
            cout<<"* ";
        }else if(i%k!=0 && i!=n){
            cout<<i<<" ";
        }else if(i%k!=0 && i==n){
            cout<<i<<endl;
        }else if(i%k==0 && i==n){
            cout<<"*"<<endl;
        }
    }


    return 0;
}
