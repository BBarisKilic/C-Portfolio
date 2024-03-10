#include <stdio.h>

int main(void) {
  int year = 2024;
  int price = 200;

  /* if (year > 2025 && price < 190)
    printf("OK!\n");
  else
    printf("Not OK!\n");*/

  if (year > 2025 || price < 210)
    printf("OK!\n");
  else
    printf("Not OK!\n");

  return 0;
}
