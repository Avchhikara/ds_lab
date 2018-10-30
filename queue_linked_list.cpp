//Linked list implementation of a queue
#include <iostream>
#include <stdlib.h>
using namespace std;

struct list_node {
	int value;
	struct list_node *next;
};
typedef struct list_node list_node;

struct queue{
	int size;
	list_node *front;
	list_node *back;
};
typedef struct queue queue;

queue *create_queue(){
	queue *q = (queue *)malloc(sizeof(queue));
	q->size = 0;
	q->front = NULL;
	q->back = NULL;
	return q;
}

void enqueue(queue *q, int value){
	list_node *ln = (list_node *)malloc(sizeof(list_node ));
	ln->value = value;
	if(q->size==0){
		q->front = ln;
		q->back = ln;
		q->size++;
	}
	else{
		q->back->next = ln;
		q->back = ln;
		q->size++;	
	}
	
}

int dequeue(queue *q){
	if(q->size==0){
		return -1;
	}
	list_node *dequeue = q->front;
	int value = dequeue->value;	
	q->front = q->front->next;
	q->size--;
	dequeue->next = NULL;	//Freeing up the dequeued node
	return value;
}


int main(){
	
	queue *q = create_queue();
	enqueue(q, 1);
	enqueue(q, 6);
	enqueue(q, 3);
	while(q->size!=0){
		cout<<dequeue(q)<<" ";
	}
	
	return 0;
}
