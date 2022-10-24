#include "lists.h"

/**
 * listlen - Prints all numbers of elements in a linked_list_t
 * @h: input head of singly linked list to print
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (n != NULL)
{
n++;
h = h->next;
}
return (n);
}
