#include "lists.h"

/**
 * listlen - Prints all numbers of elements in a linked_list_t
 * @h: input head of singly linked list to print
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
count +=1;
cursor = cursor->next;
}
return (count);
}
