#include "lists.h"
/**
 * print_list - function that prints all node properties
 * @h: pointer to the node
 * Return: @count the existing number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
