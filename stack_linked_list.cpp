//stack implementation using linked list
#include <iostream>
#include <stdlib.h>
using namespace std;

struct list_node{
	int value;
	struct list_node *next;
};
typedef struct list_node list_node;

struct stack{
	int size;
	list_node *top;
};
typedef struct stack stack;

stack *create_stack(){
	stack *s = (stack *)malloc(sizeof(stack));
	s->size = 0;
	s->top = NULL;
	return s;
}

void push(stack *s , int value){
	list_node *ln = (list_node *)malloc(sizeof(list_node));
	ln->value = value;
	ln->next = NULL;
	s->size++;
	if(s->top==NULL){
		s->top = ln;	
	}
	else{
		ln->next = s->top;
		s->top = ln;
	}
}

int pop(stack *s){
	int value = s->top->value;
	list_node *pop = s->top;
	s->top = s->top->next;
	pop->next = NULL;
	return value;
}

int main(){
	stack *s = create_stack();
	cout<<"Enter the value to be pushed to stack or -1 to stop pushing: ";
	int inp;
	cin>>inp;
	while(inp!=-1){
		push(s, inp);
		cin>>inp;
	}
	cout<<"\n Stack you have is: ";
	while(s->top!=NULL){
		cout<<" "<<pop(s);
	}
	return 0;
}
