#include <iostream>
#include <stdlib.h>
using namespace std;

int arr_len = 0;

void delete_value(int *arr){
	int pos;
	cout<<"\nEnter the position whose entry you want to delete: ";
	cin>>pos;
	if(pos>=10){
		cout<<"\nError, the entered position doesn't exist\n";
		return;
	}
	else{
		while( pos<10 ){
			arr[pos] = arr[pos+1];
			pos+=1; 
		}
	}
	
	
}

void view(int *arr){
	int i=0; 
	cout<<endl<<"The array : ";
	
	while(i<10-arr_len){
		cout<<arr[i]<<" ";
		i++;
	}
	
	
	
}


int main(){
	int arr[10];
	//Storing the values in array
	for(int i=0; i<10; i++){
		arr[i] = rand()%100;
	}
	view(arr);
	cout<<endl;
	//Now, taking the input from user
	cout<<"\n Choose an operaion among the following:-\n1. Enter 1 to delete an entry.";
	
	while(true){
		cout<<"\nEnter the input: ";
		int inp;
		cin>>inp;	
		if(inp==1){
			delete_value(arr);
			arr_len = arr_len + 1;
			view(arr);
			//cout<<"\nThe size of array is: "<<10-arr_len;
		}
		
		else{
			cout<<"\nThe program will terminate now\n";
			break;
		}
		
	}
	
	
	return 0;
}
