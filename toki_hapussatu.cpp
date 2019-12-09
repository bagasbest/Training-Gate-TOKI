#include <bits/stdc++.h>
using namespace std;

int main(){
    string x,y;

    cin>>x>>y;

    int a=x.length(),b=y.length(),s=0,m=0, n=0;

    for(int i=0; i<a; i++){


       if(x[m] != y[n]){
            s= s+1;
       }

       if(x[m] == y[n]){
        m++; n++;
       }else{
        m++;
       }
    }

    if(s == 1 && a>b){
        cout<<"Tentu saja bisa!"<<endl;
    }else {
        cout<<"Wah, tidak bisa :("<<endl;
    }
    return 0;
}
