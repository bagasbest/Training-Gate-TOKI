#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,t,j,k,l,n;

    cin>>t;

    for(i=0; i<t; i++){
        cin>>n;

        for(j=1; j<=n; j++){
            l=0;

            for(k=1; k<=j; k++){
                if(j%k==0){
                    l+=1;
                }
            }
            if(l==2){
                cout<<j<<endl;
            }
        }
        cout<<endl;
    }
}
