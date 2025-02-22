#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; // Initialize ptr to point to the address of x
  *ptr = 20;
  printf("%d\n", x); // Output: 20
  return 0;
}
