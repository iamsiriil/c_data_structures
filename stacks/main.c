#include "ds_stack_arr.h"

int	main(void)
{
	t_stack	stack = {{}, -1};

	ds_push(&stack, 12), printf("push : 12 | top : %d\n", stack.tp);
	ds_push(&stack, 59), printf("push : 59 | top : %d\n", stack.tp);
	ds_push(&stack, 4), printf("push :  4 | top : %d\n", stack.tp);
	ds_push(&stack, 7), printf("push :  7 | top : %d\n", stack.tp);
	ds_push(&stack, 46), printf("push : 46 | top : %d\n", stack.tp);

	printf("\nstack : ");
	ds_print_stack(&stack);
	printf("\n");

	printf("pop  : %2d | top : %d\n", ds_pop(&stack), stack.tp);
	printf("pop  : %2d | top : %d\n", ds_pop(&stack), stack.tp);
	printf("pop  : %2d | top : %d\n", ds_pop(&stack), stack.tp);
	printf("\n");

	printf("top : %d\n", stack.tp);
	return (0);
}
