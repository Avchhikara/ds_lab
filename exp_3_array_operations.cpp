#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void add(int *arr_1, int *arr_2, int *out){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			*(out + i + j) = *(arr_1 + i + j) + *(arr_2 + i + j);
		}
	}
}

void sub(int *arr_1, int *arr_2, int *out){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			*(out + i + j) = *(arr_1 + i + j) - *(arr_2 + i + j);
		}
	}
}

void mul(int *arr_1, int *arr_2, int *out){
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			*(out + i +j) = 0;
			for(int k=0; k<3; k++){
				*(out + i +j) = (*(arr_1 + i + k)) * (*(arr_2 + k + j));
			}
		}
	}
	
}

void print_out(int *arr_1, int *arr_2, int *out, char c){
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%3d", *(arr_1 + i + j));
		}
		if(i == 1){ 
			printf(" %c ", c);
		}
		else 
			printf("   ");
		for(int j=0; j<3; j++)
			printf("%3d", *(arr_2 + i+ j));
		printf("%3s", i==1? " = ": "   ");
		for(int j=0; j<3; j++)
			printf("%7d", *(out + i + j));
		cout<<endl;
	}
	
	
}


int main(){
	
	cout<<"\n The operations you can perform are: \n1. Enter 1 to add the given arrays\n2. Enter 2 to subtract two arrays\n3. Enter 3 to multiply two arrays\n4. Enter -1 to exit the program\n";
	
	
	int arr_1[3][3], arr_2[3][3], out[3][3];
	//Generating the two array
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			arr_1[i][j] = rand()%100;
			arr_2[i][j] = rand()%100;
		}
	}
	//Printing the array
	cout<<"\nThe arrays we have are: \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf( "%2d " , arr_1[i][j]);
		}
		printf("%s", i==1?" And ": "     ");
		for(int j=0; j<3; j++)
			printf( "%2d " , arr_2[i][j]);
		cout<<endl;
	}
	
	while(true){
		int inp=0;
		cout<<"\nEnter the operation you want to perform: ";
		cin>>inp;
		
		if(inp == 1){
			add(arr_1[0], arr_2[0], out[0]);
			print_out(arr_1[0], arr_2[0], out[0], '+');
		}
		else if(inp == 2){
			sub(arr_1[0], arr_2[0], out[0]);
			print_out(arr_1[0], arr_2[0], out[0], '-');
		}
		else if(inp == 3){
			mul(arr_1[0], arr_2[0], out[0]);
			print_out(arr_1[0], arr_2[0], out[0], '*');
		}
		else{
			cout<<"\n The program will exit now!! \n";
			break;
		}	
		
	}
	
	return 0;
}



