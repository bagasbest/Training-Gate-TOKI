#include <bits/stdc++.h>

using namespace std;

int main() {
    long long i,n;

    cin>>n;

    long long x[n];


    for(i=0; i<n; i++){
        cin>>x[i];
    }

    long long sum=0;
    for(i=0; i<n; i++){
        if(x[i] - x[i-1] != 1 && i>0 ){
             if(x[i] == x[i-1]){
                //sum = sum + x[i]-1-x[i-1];
                sum = sum + 3;
             }else if( x[i] > x[i-1]){
                sum = sum +
             }
        }
    }


    if(sum == 0){
        cout<<0<<endl;
    }else {
        cout<<sum<<endl;
    }
}
