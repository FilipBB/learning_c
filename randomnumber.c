/* Guess the number game */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int randomnum = rand() % 20;
  int guess;
  int i = 0;

  while (i < 5) {
    printf("Guess: ");
    scanf("%d", &guess);
    if (guess < randomnum) {
      printf("Too low!\n");
    } else if (guess > randomnum) {
      printf("Too high!\n");
    } else {
      printf("Correct! The number is %d\n", randomnum);
      break;
    }
    i++;
  }
}
