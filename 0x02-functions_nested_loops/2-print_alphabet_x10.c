#include <stdio.h>
/**
 *a to z alphbate 10*
 */
int main(void)
{
  int i;
  int n;
  for (i = 0; i < 10; i++)
    {
    for (n='a';n <= 'z'; n++)
      putchar(n);
    putchar('\n');    
      }

}
