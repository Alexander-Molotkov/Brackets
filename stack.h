#ifndef STACK_H
#define STACK_H

struct node{

	char c;
	struct node* next;
};

struct node* create_node();
void free_node(struct node* n);
void free_stack(struct node* head);

struct node* stack_add(struct node* old_head, char c);
char stack_peek(struct node* head);
struct node* stack_pop(struct node* old_head); //TODO

void print_stack(struct node* head);

#endif
