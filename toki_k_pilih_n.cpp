#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i;


    cin>>n>>k;
    long long x[n];

    for(i=0; i<n; i++){
        cin>>x[i];
    }

    sort(x,x+n);

    long long min = 1000000000;
    for(i=0; i<n; i++){
            if(i >= k-1 && x[i]-x[i-k+1] < min){
                min = x[i]-x[i-k+1];
            }
    }

    cout<<min<<endl;

    return 0;
}
