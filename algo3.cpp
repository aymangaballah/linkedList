
#include<stdio.h>
#include<stdlib.h>
struct node_of_list {
	int data;
	struct node_of_list* link;
};
struct node_of_list* front = NULL;
struct node_of_list* rear = NULL;
void enqueue(int num) {
	struct node_of_list* temp = (struct node_of_list*)malloc(sizeof(struct node_of_list));
	temp->data = num;
	temp->link = NULL;
	if (front == NULL && rear == NULL) {
		front = rear = temp;
		printf("First element added successfully %d\n",num);
		return;
	}
	rear->link = temp;
	rear = temp;
	printf("Element enqueued successfully %d\n",num);
}

void dequeue() {
	struct node_of_list* temp = front;
	if (front == NULL) {
		printf("Error!, The queue is empty ");
		return;
	}
	if (front = rear) {
		front = rear = NULL;
	}
	else
	{
		front = front->link;
	}
	free(temp);
	printf("dequeued successfully \n");
}
int main() {
	
	enqueue( 7);
    enqueue( 9);
    enqueue( 2001);
    dequeue();
    enqueue(3);
    enqueue(10);
    enqueue(2001);
    dequeue();
    return 0;
}
