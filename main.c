#include "header.h"
#include <stdio.h>
 
int main()
{
  int x = 10, y = 20;
  printf("\n%d + %d = %d", x, y, sum(x, y));
  printf("\n%d - %d = %d\n", y, x, sub(x, y));
  return 0;
}
