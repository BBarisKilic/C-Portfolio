#include <stdio.h>

int main(void) {
  // -5, 0, 20, 512
  int my_int = 10;

  // -2.5, 98.2, 130.1234
  float my_float = 5.125678;
  double my_double = 5.125678;

  char my_char = 'A';
  char my_encoded_char = 113;

  printf("my_int: %d\n", my_int);
  printf("my_float: %lf\n", my_float);
  printf("my_double: %lf\n", my_double);
  printf("my_char: %c\n", my_char);
  printf("my_encoded_char: %c\n", my_encoded_char);
  
  return 0;
}
