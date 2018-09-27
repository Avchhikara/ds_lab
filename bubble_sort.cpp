//Bubble Sort
//By Avnish

#include <iostream>
using namespace std;

int main(){
	//let's sort the following array
	int arr[10] = {3, 4, 5, 1, 6, 7, 0, 2, 8, 9};
	int index = 0;
	//Sorting the array
	while(index<10){
		for(int i=0; i<10; i++){
			if(arr[i]>arr[index]){
				int temp = arr[i];
				arr[i] = arr[index];
				arr[index] = temp;
			}
		}
		index++;
	}
	
	//printing the sorted array
	for(int i=0; i<10; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
