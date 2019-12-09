#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int i,n;

    cin>>n;

    //faktorial
    for(i=n; i>=1; i--){
        if(n%i==0){

            cout<<i<<endl;
        }
    }
}
