#include <stdlib.h>
#include <string.h>
#include "queue.h"

/**
 * pop_queue - dequeues an element from a queue
 * @queue: the queue that needs to be dequeued
 */

char *pop_queue(Queue **queue)
{
	char *str;
	Queue *element;

	element = *queue;
	if (*queue == NULL)
	{
		return (NULL);
	}
	else
	{
		str = strdup(element->str);
		*queue = element->next;
		free(element->str);
		free(element);
	}
	return (str);
}
