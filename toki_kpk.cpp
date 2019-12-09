#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, i,j,sum;


        cin>>n;
        int x[n];

        for(j=0; j<n; j++){
            cin>>x[j];
        }

        sort(x, x+j);

        sum=x[j-1]*x[j-2];
        cout<<sum<<endl;



    return 0;
}
