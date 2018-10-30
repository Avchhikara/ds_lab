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
//for swapping two numbers
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

//implementation of bubble sort
void bubble_sort(int *arr, int len){
	for(int i=0; i<len; i++){
		int var = arr[i];
		for(int j = i; j<len; j++){
			if(arr[j]<arr[i])
				swap(&arr[j], &arr[i]);	
		}
	}
}

int main(){
	int len = 10;
	int *arr = (int *)malloc(sizeof(int )*len);
	create_array(arr, len);
	cout<<"\nUnsorted array is: ";
	print_array(arr, len);
	bubble_sort(arr, len);
	cout<<"\nSorted array using bubble sort is: ";
	print_array(arr, len);
	return 0;
}
