#include <stdio.h>

int main(void) {
  int x = 5;

  if (x == 2) {
    printf("x is equal to 2\n");
  } else if (x == 3) {
    printf("x is equal to 3\n");
  } else if (x == 4)
    printf("x is equal to 4\n");
  else {
    printf("x is not equal to 2, 3 or 4\n");
  }

  printf("if done!\n");

  return 0;
}
