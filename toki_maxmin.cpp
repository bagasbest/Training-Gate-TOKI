#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int max=-100000, min=100000, i,n;

    cin>>n;
    long long int x[n];

    for(i=0; i<n; i++){
        cin>>x[i];
    }

    for(i=0; i<n; i++){
        if(max < x[i]){
            max=x[i];
        }else if(min > x[i]){
            min=x[i];
        }
    }

    if(n==0){
    cout<<"0"<<" "<<"0"<<endl;
    }else if(n>0){
    cout<<max<<" "<<min<<endl;
    }
    return 0;
}
