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

struct node* stack_add(struct node* old_head, char c){

	struct node* n = create_node();
	n->next = old_head;
	n->c = c;
}
