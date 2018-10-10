#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node* create_node(){

	struct node* n = malloc(sizeof(*n));

	n->c = '\0';
	n->next = NULL;
	
	return n;
}

void free_node(struct node* n){

	free(n);
}

void free_stack(struct node* head){

	struct node* n = head;
	struct node* temp;
	
	while(n->next != NULL){
		temp = n;
		n = n->next;
		free_node(temp);
	}
	if(n != NULL){
		free_node(n);
	}
}

struct node* stack_add(struct node* old_head, char c){

	struct node* n = create_node();
	n->next = old_head;
	n->c = c;
	return n;
}

char stack_peek(struct node* head){
	return head->c;
}

struct node* stack_pop(struct node* old_head){
	
	struct node* n;
	n = old_head->next;
	free_node(old_head);

	return n;
}

void print_stack(struct node* head){
	
	int i = 1;
	struct node* n = head;
	
	do{
		printf("node %d: %c\n", i, n->c);
		if(n->next != NULL){
			i++;
			n = n->next;
		}
	}while(n->next != NULL);
}
