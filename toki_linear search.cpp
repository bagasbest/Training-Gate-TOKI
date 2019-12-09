#include <bits/stdc++.h>
using namespace std;

int main (){
  long long n,m,i;

  cin>>n>>m;
  long long x[n];

  for(i=0; i<n; i++){
    cin>>x[i];
  }

  for(i=0; i<n; i++){
    if(x[i] == m){
        cout<<i<<endl;
        return 0;
    }else if(i == n-1){
        cout<<-1<<endl;
    }
  }



}
