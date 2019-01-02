#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Node {
	int key;
	struct Node *next;
}NODE;

Node *newNode(int key) {
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->key = key;
	temp->next = NULL;
	return temp;
}

void addNode(Node *head, Node *node) {
	// check if its not null (all the vars in the node not null (without values)
	if (!head) {
		head = node;
		return;
	}
	// add here the new node if all the values isnt null
	Node *current = head;
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = node;

}

Node *delete_min(Node *head) {

	Node *min = head;
	Node *current = head;	
	
	while (current->next != NULL)
	{
		if (min->key > current->key) {
			min = current;
			current->next = current;
		}
		else
			current->next = current;
		if (min->key > current->key) {
			min = current;
			current->next = current;
		}
		else
		    current->next = current;
		return min;
	}
	
}

void main() 
{
	int num = 0;
	Node *head = NULL;
	Node *temp = NULL;
	Node *min = NULL;
	printf("insert number:");
	scanf("%d%*c", &num);
	head = newNode(num);

	while (num >= 0) {
		temp = newNode(num);
		addNode(head, temp);
		scanf("%d%*c", &num);
	}
	
	min = delete_min(head);
	printf("minimum number is: %d\n",min->key);
	
}