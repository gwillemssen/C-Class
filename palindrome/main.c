#include "logic.h"
#include <stdio.h>

int main(void) {

  // setup your test cases here
  if (!is_palindrome("test", 4)) {
    printf("test is not a palindrome\n");
  } else {
    printf("test is a palindrome\n");
  }
  if (!is_palindrome("racecar", 7)) {
    printf("racecar is not a palindrome\n");
  } else {
    printf("racecar is a palindrome\n");
  }
  if (!is_palindrome("girafarig", 9)) {
    printf("girafarig is not a palindrome\n");
  } else {
    printf("girafarig IS a palindrome\n");
  }
  if (!is_palindrome("palindrome", 10)) {
    printf("palindrome is not a palindrome\n");
  } else {
    printf("palindrome is a palindrome\n");
  }
}
