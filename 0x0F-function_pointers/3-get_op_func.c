#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator argument
 * Return: function pointer corresponding to operator given
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{ "+", op_add },
{ "-", op_sub },
{ "*", op_mul },
{ "/", op_div },
{ "%", op_mod }
{ NULL, NULL }
};
int i;

while (s && ops[i].op != NULL)
{
if (!strcmp(s, ops[i].op))
return (ops[i].f);
i++;
}
return (ops[i].f);
}
