#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
<<<<<<< HEAD
	size_t s = 0;

=======
	size_t n = 0;
>>>>>>> 01a74b2d7c2d10a788aa5b2307f1991f138c61f1
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
<<<<<<< HEAD
		s++;
	}

	return (s);
=======
		n++;
	}
	return (n);
>>>>>>> 01a74b2d7c2d10a788aa5b2307f1991f138c61f1
}
