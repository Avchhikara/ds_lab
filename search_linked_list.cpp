//Linked list implementation
#include <iostream>
#include <stdlib.h>
using namespace std;

struct list_node{
	int value;
	struct list_node *next;
};
typedef struct list_node list_node;

struct list{
	int size;
	list_node *head;
};
typedef struct list list;

list *create_linked_list(){
	list *l = (list *)malloc(sizeof(list));
	l->size = 0;
	l->head = NULL;
	return l;
}

void push(list *l, int value){
	
	list_node *ln = (list_node *)malloc(sizeof(list_node));
	ln->value = value;
	ln->next = NULL;
	if(l->size==0){
		l->head = ln;	
	}
	else{
		ln->next = l->head;
		l->head = ln;
	}
	l->size++;
}

int pop(list *l){
	if(l->size==0){
		return -1;
	}
	list_node *pop = l->head;
	int value = pop->value;
	l->head = l->head->next;
	pop->next = NULL; 	//Freeing up the popped out node
	l->size--;
	return value;
}

void view(list *l){
	
	cout<<"\n The linked list we have is: ";
	list_node *ln = (list_node *)malloc(sizeof(list_node));
	ln = l->head;
	for(int i=0; i<l->size; i++){
		cout<<" "<<ln->value;
		ln = ln->next;
	}
}

void search_list(list *l, int inp){
	list_node *ln = (list_node *)malloc(sizeof(list_node ));
	ln = l->head;
	for(int i=0; i<l->size; i++){
		if(ln->value==inp){
			cout<<"It's present at : "<<i;
			return;
		}
		ln = ln->next;
	}
	cout<<"\n\tValue not present\n";
}

int main(){
	list *l = create_linked_list();
	int inp;
	cout<<"\nWelcome to linked list maintainance program. Here are your options -->";
	cout<<"\n1. Enter 1 for adding enteries to the list.";
	cout<<"\n2. Enter 2 for viewing the linked list.";
	cout<<"\n3. Enter 3 to search for a item.";
	cout<<"\n4. Enter 4 for deleting the entire list.";
	cout<<"\nENTER -1 TO EXIT PROGRAM";
	while(true){
		cout<<"\nEnter your input: ";
		cin>>inp;
		if(inp==1){
			cout<<"\n Enter the value you want to add: ";
			cin>>inp;
			push(l, inp);
			cout<<"\nValue added";		
		}
		else if(inp==2){
			view(l);
		}
		else if(inp==3){
			view(l);
			cout<<"\n Enter the value, to search for: ";
			cin>>inp;
			search_list(l, inp);
		}
		else if(inp==4){
			while(l->size!=0){
				pop(l);
			}
			cout<<"\n\tWhole list has been deleted\n";
		}
		else{
			cout<<"\nThe program will terminate now\n";
			break;
		}
	}
	
	return 0;
}
