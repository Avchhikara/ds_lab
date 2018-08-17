#include <iostream>
#include <stdlib.h>
using namespace std;

int arr[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 45, 65, 70};

int out(int start, int search, int end){
	int mid=(start+end)/2;
	int output = 0;
	if(search>arr[mid]){
		
		return out(mid, search, end);
	}
	else if(search<arr[mid]){
		
		output = out(start, search, mid);
	}
	else if(search==arr[mid]){
		
		output= mid;
	}
	return output;
}

int main(){
	int search;
	cout<<"\nThe array we have is: ";
	for(int i=0; i<13; i++)
		cout<<arr[i]<<" ";
	cout<<"\nEnter the value you want to search for: ";
	cin>>search;
	cout<<"\n"<<"The position is : "<< out(0, search, 13);
	
	return 0;
}
