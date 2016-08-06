#include <stdlib.h>
#include <string.h>
#include "stack.h"

/**
 * pop_stack - pops an element from a Stack
 * @stack: Stack that needs to be popped
 */

char *pop_stack(Stack **stack)
{
	char *str;
	Stack *element;

	element = *stack;
	if (*stack == NULL)
	{
		return (NULL);
	}
	else
	{
		str = strdup(element->str);
		*stack = element->next;
		free(element->str);
		free(element);
	}
	return (str);

}
