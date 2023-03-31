#include <stdio.h>

int main(void)
{
  int n = 3;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
    *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("the adress of n is : %p\n", &p);
  printf("the adrees of a[0] is : %p\n", &a[0]);
  printf("the adrees of a[1] is : %p\n", &a[1]);
  printf("the adrees of a[2] is : %p\n", &a[2]);
  printf("the adrees of a[3] is : %p\n", &a[3]);
  printf("the adrees of a[4] is : %p\n", &a[4]);
  return (0);
}
