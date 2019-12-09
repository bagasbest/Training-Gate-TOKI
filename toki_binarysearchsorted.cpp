#include <iostream>
using namespace std;

int main(){
	long long count, i, num, first, last, middle;
        cin>>count;

        long long arr[count];

	for (i=0; i<count; i++){
        cin>>arr[i];
	}


    long long q,j;
    cin>>q;

    for(j=0; j<q; j++){
        cin>>num;

	first = 0;
	last = count-1;
	middle = (first+last)/2;

	while (first <= last){

	   if(arr[middle] < num){
            first = middle + 1;
    }
	   else if(arr[middle] == num)
	   {
		cout<<middle<<endl;
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }

        if(first > last){
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
