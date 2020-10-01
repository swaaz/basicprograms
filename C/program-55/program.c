/* Program that prints a number in binary*/

// start writng code from here
#include <stdio.h>

int main (void)
{
  int b;
  unsigned int mask = 1<<31;

  printf("Input a 32bits integer number: ");
  scanf("%d", &b);

  while (mask != 0){
    printf("%d", b&mask?1:0);
    mask >>= 1;
  }

  printf("\n");

  return 0;
}
