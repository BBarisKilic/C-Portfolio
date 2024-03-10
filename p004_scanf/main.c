#include <stdio.h>

int main(void) {
  // int n = 0;
  // printf("Enter a number: ");
  // scanf("%d", &n);
  // printf("The number you entered is: %d\n", n);

  // char d = 'a';
  // printf("Enter a character: ");
  // scanf("%c", &d);
  // printf("The character you entered is: %c\n", d);

  char buffer[50];
  printf("Please enter your name: ");
  scanf("%s", buffer);
  printf("Your name is: %s\n", buffer);

  return 0;
}
