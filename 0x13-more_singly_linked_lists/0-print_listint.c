#include "list.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: input head of single linked list 
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h);
{
size_t n = 0;

while (h != NULL)
{
n++;
printf("%d\n", h->n);
h = h->next;
}
return (n);
}

