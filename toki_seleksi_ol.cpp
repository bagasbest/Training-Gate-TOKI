#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,t,n,m,max,a;


    string id,idp;

    cin>>t;

    for(i=0; i<t; i++){
        cin>>n>>m;
        cin>>id;

        int x[n],y[n],z[n];

        for(j=1; j<=n; j++){
            cin>>idp;
            cin>>x[j]>>y[j]>>z[j];

            //a=j;

            if(max < z[j]){
                max = z[j];
            }

        }

        for(j=n; j>=1; j--){
            cout<<z[j]<<" ";
        }
        //cout<<max<<endl;
        //cout<<idp<<endl;



    }
}
