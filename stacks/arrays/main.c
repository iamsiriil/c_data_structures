#include "ds_stack_arr.c"

int	main(void)
{
	t_stack	stack = {-1, {}};

	ds_push(&stack, 12);
	ds_push(&stack, 59);
	ds_push(&stack, 4);

	ds_print_stack(&stack);

	printf("pop : %d\n", ds_pop(&stack));
	printf("top : %d\n", stack.tp);
	return (0);
}
