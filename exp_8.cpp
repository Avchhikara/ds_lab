//selection sort implementation
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

void selection_sort(int *arr, int len) {

    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < len; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < len; j++) 
          	if (arr[j] < arr[min_idx]) 
            	min_idx = j; 
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
int main(){
	int len = 10;
	int *arr = (int *)malloc(sizeof(int )*len);
	create_array(arr, len);
	cout<<" Unsorted array is: ";
	print_array(arr, len);	
	cout<<"\nSorted array(using selection sort) is: ";
	selection_sort(arr, len);
	print_array(arr, len);
	return 0;
}
