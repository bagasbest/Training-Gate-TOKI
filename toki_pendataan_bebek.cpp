#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,i,j,y,z,z2;
    cin>>t;
    int x[t];

    for(i=0; i<t; i++){
        cin>>x[i];


    }

    cin>>y;

    for(j=0 ;j<y; j++){
            int a=0;
            cin>>z>>z2;

        for(i=0; i<t; i++){
            if(x[i] >z && x[i] <=a){
                a++;
            }
        }
        cout<<a<<endl;

    }


}
