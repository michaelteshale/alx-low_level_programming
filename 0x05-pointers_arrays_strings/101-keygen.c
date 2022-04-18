#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *Task 12
 *generates random valid passwords for
 * the program 101-crackme.
 */
int main(void)
{
int num;
srand(time(0));
num =rand();
printf("%i\n", num);
return (0);
}
