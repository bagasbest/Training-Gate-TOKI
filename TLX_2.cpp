#include <iostream>
using namespace std;

int main (){
	int a,b,c,n;
	bool aw=false;
	cin>>a >>b >>c;
	
	if(a<b){
		n=b; b=a; a=n;
	}if(b<c){
		n=c; c=b; b=n;
		if(a<b){
		n=b; b=a; a=n;
		}
	}
	
	int d=b+c;
	while(a>0 && d>0){
		a= a-4;
		d= d-3;
		
		if(a==0 && d==0){
		  aw = true;	
		}
	}
	
	if(aw){
		cout<<"YA"<<endl;
	}else{
		cout<<"TIDAK"<<endl;
	}
}
