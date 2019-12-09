#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,s2,sub;
    int x,n,i,j;

    cin>>s;
    cin>>n;
    x = s.length();
    for(i=0; i<n; i++){
        cin>>s2;



        int x2= s2.length();
        for(j=0; j<x2; j++){
            sub = s2.substr(j, x-1);


        if(x-1>=1){

             if(sub == s.substr(0,x-1)){
                            cout<<s2<<endl;

                break;
            }
            else if(sub == s2.substr(x2-x+1)){
                cout<<endl;
                break;
            }
        }else{
            cout<<s2<<endl;
            break;
        }

        }

    }
    return 0;
}
