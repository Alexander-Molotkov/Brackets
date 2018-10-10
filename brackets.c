#include "stack.h"

int main(){

	struct node* stack;
	stack = create_node();

	stack = stack_add(stack, 'x');
	stack = stack_add(stack, 'y');
	stack = stack_add(stack, 'z');
	print_stack(stack);

	return 0;
}
