
#include <bits/stdc++.h>
using namespace std;


int main(){

	long long i,j,t,n,y,z,s=0,s2=0;
	int x;
	cin>>t>>n;

	for(i=0; i<n; i++){
        cin>>x>>y>>z;

        if(x==1){
                if(y == t){
                    s += z;
                    s2 +=z;
                }else{
                    s +=z;
                }
        }else{
                if(y == t){
                    s2 -= z;
                    s -= z;

                }else {
                    s2 -= z;
                }
        }
	}

	if(abs(s) > abs(s2)){
        cout<<abs(s)<<endl;
	}else{
        cout<<abs(s2)<<endl;
	}

	return 0;
}


