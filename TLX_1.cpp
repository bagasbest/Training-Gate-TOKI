#include <iostream>
using namespace std;

int main (){
	int n,a,b,c,sum=0,temp;
	bool s=false;
	cin>>n;
	cin>>a>>b>>c;

	if(a>b){
		temp=a; a=b; b=temp;
	}if(b>c){
		temp=b; b=c; c=temp;
		if(a>b){
		temp=a; a=b; b=temp;
	}
}
cout<<a<<b<<c<<endl;
	while (n >=0 && !s){
		if(n-a>=0){
			n=n-a;
			sum++;
		}if(n-b>=0){
			n=n-b;
			sum++;
		}if(n-c>=0){
			n=n-c;
			sum++;
		}else{
			s = true;
		}
	}

	cout<<sum<<endl;

}
