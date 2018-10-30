//insertion sort implementation
#include <iostream>
#include <stdlib.h>
using namespace std;

//To generate a random array
void create_array(int *arr, int len){
	int i = 0;
	while(i<len)
		arr[i++] = rand()%len;	
}

void print_array(int *arr, int len){
	int i = 0;
	while(i<len){
		cout<<arr[i++]<<" ";
	}
}

//Now, sorting using insertion sort
void insertion_sort(int *arr, int len){
	for(int i = 0; i<len; i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && key<arr[j]){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}

int main(){
	int len = 10;
	int *arr = (int *)malloc(sizeof(int )*len);
	create_array(arr, len);
	cout<<"\nUnsorted array: ";
	print_array(arr, len);
	cout<<"\nSorted array with insertion sort is: ";
	insertion_sort(arr, len);
	print_array(arr, len);
	cout<<endl;
	
	return 0;
}
