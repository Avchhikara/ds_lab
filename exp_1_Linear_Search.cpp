#include <iostream>
#include <stdlib.h>
using namespace std;

void find_val(int *arr, int find){
	for(int i=0; i<50; i++){
		if(arr[i]==find){
			cout<<"\n\t The entered value is present at "<<i+1<<" position\n";
			return;
		}
	}
	cout<<"\n \t The entered value does not exist in array\n";
}


int main(){
	int arr[50];
	//Following block generates and array
	for(int i=0; i<50; i++){
		arr[i] = rand()%100;
	}
	//Displaying the array
	cout<<"\n The array we have is: ";
	for(int i=0; i<50; i++){
		cout<<arr[i]<<" ";
	}
	
	//Now, taking the input to be searched
	int find;
	cout<<"\nEnter the value to be searched\n";
	cin>>find;
	find_val(arr, find);
	
	
	
	return 0;
}
