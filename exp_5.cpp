//Program to swap two numbers
#include <iostream>
using namespace std;

void call_by_reference(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void call_by_value(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	cout<<"a="<<a<<" and b="<<b;
}

int main(){
	int a, b;
	cout<<"\nEnter numbers to be swapped: ";
	cin>>a>>b;
	cout<<"\nSwapped output----> ";
	cout<<"\tCall by value: ";
	call_by_value(a, b);
	call_by_reference(&a, &b);
	cout<<"\tCall by reference: a="<<a<<" and b="<<b<<endl;
	return 0;
}
