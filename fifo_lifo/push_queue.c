#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "queue.h"

/**
 * push_queue - enqueues an element in a list
 * @queue: points to the queue list
 * @str: passes a string as parameter and copies it in a list element
 */

int push_queue(Queue **queue, char *str)
{
	Queue *element;
	Queue *actual_element;

	element = malloc(sizeof(*element));

	if (element == NULL)
	{
		return (1);
	}
	element->str = strdup(str);
	element->next = NULL;

	if (*queue == NULL)
	{
		*queue = element;
	}
	else
	{
		actual_element = *queue;
		while (actual_element->next != NULL)
		{
			actual_element = actual_element->next;
		}
		actual_element->next = element;
	}
	return (0);
}
