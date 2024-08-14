#include <ctype.h>
#include <stdio.h>
#include <string.h>

const int SHOuldTriggerClang_Tidy = 10;

int main(void) {
  int num = 4;

  printf("%d\n", SHOuldTriggerClang_Tidy);

  switch (num) {
    case 1:
      printf("Case 1\n");
      if (1 == 1)
        printf("if!\n");
      break;
    case 2:
      printf("Case 2\n");
      break;
    default:
      printf("Case default\n");
  }

  printf("Below switch statement\n");

  char s[] = "abcdEFgHIgKlmnOPQrStuVwXyz";
  int length = strlen(s);
  int a = 0;
  int vowel = 0;

  for (int i = 0; i < length; i++) {
    switch (toupper(s[i])) {
      case 'A':
        a++;
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        vowel++;
    }
  }

  printf("a: %d, vowel: %d\n", a, vowel);

  return 0;
}
