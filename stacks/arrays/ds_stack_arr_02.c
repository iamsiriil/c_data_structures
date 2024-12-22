#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

typedef struct	s_stack
{
	int	top;
	int	stack[STACK_SIZE];
}	t_stack;

static int	ds_isfull(t_stack *stack)
{
	return ((stack->top == STACK_SIZE - 1) ? 1 : 0);
}

static int	ds_isempty(t_stack *stack)
{
	return ((stack->top == -1) ? 1 : 0);
}

static void	ds_push(t_stack *stack, int nbr)
{
	if (ds_isfull(stack))
		return ;
	stack->top += 1;
	stack->stack[stack->top] = nbr;
}

static int	ds_pop(t_stack *stack)
{
	if (ds_isempty(stack))
		exit(1);
	int	nbr = stack->stack[stack->top];
	stack->stack[stack->top] = 0;
	stack->top -= 1;
	return (nbr);
}

static void	ds_print_stack(t_stack *stack)
{
	for (int i = 0; i <= stack->top; i++)
		printf("stack[%d] : %d\n", i, stack->stack[i]);
}

int	main(void)
{
	t_stack	stack = {-1, {}};

	ds_push(&stack, 12);
	ds_push(&stack, 59);
	ds_push(&stack, 4);

	ds_print_stack(&stack);

	printf("pop : %d\n", ds_pop(&stack));
	printf("top : %d\n", stack.top);
	return (0);
}
