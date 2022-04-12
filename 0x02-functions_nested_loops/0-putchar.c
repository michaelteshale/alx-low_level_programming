#include "main.h"
/**
 *Print _putchar including with newline
 * Return: 0 on success.
 */
int main(void)
{
char c[] = "_putchar";
int i;
for (i = 0; i < 7; i++)
{
putchar(c[i]);
}
putchar('\n');
return (0);
}
