#include <stdio.h>

#include <string.h>

void revstr(char *str) {
  char *start = str;
  char *end = str + strlen(str) - 1;
  while (start < end) {
    char t = *start;
    *start = *end;
    *end = t;
    start++;
    end--;
  }
}

int main() {
  char input_string[100];
  printf("Enter a string : ");
  scanf("%s", input_string);
  revstr(input_string);
  printf("after reversing: %s\n", input_string);
  return 0;
}