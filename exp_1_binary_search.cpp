#include <iostream>
#include <stdlib.h>
using namespace std;

//To generate a random array
void create_array(int *arr, int len){
	int i = 0;
	while(i<len){
		arr[i++] = rand()%len;
		
	}
}

void print_array(int *arr, int len){
	int i = 0;
	while(i<len){
		cout<<arr[i++]<<" ";
	}
}

//Now, sorting using insertion sort
void sort_array(int *arr, int len){
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

int binary_search(int *arr, int len, int term){
	int beg = 0, end = len-1;
	while(beg+1 < end){
		int mid = (beg+end)/2;
		if(term==arr[mid])
			return mid;
		else if(term>arr[mid])
			beg = mid;
		else if(term<arr[mid])
			end = mid;
		
	}
	
	return -1;
}

int main(){
	int len, term = -1;
	cout<<"\nEnter the length of array to be generated: ";
	cin>>len;	//Getting the length of array
	int *arr = (int *)malloc(sizeof(int)*len); //allocating memory to integer pointer
	create_array(arr, len);		//Create a random array of specified length
	cout<<"\nGenerated array in sorted from is: ";
	sort_array(arr, len);	//Sorting the array
	print_array(arr, len); 	//Printing for user's reference
	//Now, getting the keyword to be searched
	cout<<"\n Enter the term to be searched: ";
	cin>>term;
	int out = binary_search(arr, len, term);
	if(out==-1){
		cout<<"\n NOT FOUND ";
	}
	else{
		cout<<"\nItem is present at: "<<out<<endl;
	}
	
	return 0;
}
