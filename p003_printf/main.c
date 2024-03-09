#include <stdio.h>

int main(void) {
  // New line -> \n
  printf("Hello, World!\n");

  // Tab / Indent -> \t
  printf("\tAnother line of text!\n");

  // Double quote -> \"
  printf("double quote: \"hello\"\n");

  // Backslash -> \\
  printf("backslash: \\ \n");

  // Passing argument using placeholder -> %d
  int x = 5;
  printf("x: %d\n", x);
  printf("%d, %d, %d\n", x, x + 1, x + 2);

  char c = 'Q';
  printf("c: %c\n", c);

  double y = 4.56;
  printf("f: %f\n", y);

  float f = 3.14;
  printf("f: %f\n", f);

  char str[] = "A string is here";
  printf("str: %s\n", str);

  // Giving a width for placeholder -> %4d (4 for width and since it is positive, the number will be right aligned)
  printf("|||%10d|||\n", 5);
  printf("|||%-5d|||\n", 5);

  // Giving a width as well as precision -> 7.2 (7 for width, 2 for precision and seperated with dot)
  printf("|||%8.2f|||\n", y);
  printf("|||%-8.3f|||\n", y);

  return 0;
}
