#include <stdio.h>

int main(void) {
  int non_lucky_numbers = 0;
  const int my_lucky_number = 5;

  for (int i = 0; i < 10; ++i) {
    if (i == my_lucky_number) {
      printf("My lucky number is %d!\n", i);
    } else {
      non_lucky_numbers++;
    }
  }

  printf("There were %d non lucky numbers! \n", non_lucky_numbers);

  return 0;
}