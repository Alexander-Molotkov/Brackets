#include <stdio.h>
#include "stack.h"

int main(){

	struct node* stack;
	stack = create_node();

	stack = stack_add(stack, 'x');
	stack = stack_add(stack, 'y');
	stack = stack_add(stack, 'z');
	printf("stack_peek() %c\n", stack_peek(stack));
	
	print_stack(stack);
	free_stack(stack);

	return 0;
}
