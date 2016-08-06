#include <stdlib.h>
#include <string.h>
#include "stack.h"

/**
 * push_stack - pushes an element on the top of a Stack
 * @stack: points to the stack list
 * @str: passes a string as parameter and copies it in a list element
 */
int push_stack(Stack **stack, char *str)
{
	Stack *element;

	element = malloc(sizeof(*element));
	if (element == NULL)
	{
		return (1);
	}
	element->str = strdup(str);
	element->next = *stack;
	*stack = element;
	return (0);
}
