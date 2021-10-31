/* Generate a list of prime numbers less than 100 */
#include <stdio.h>

int main() {
  int primes[100] = {2, 3};
  _Bool isprime = 1;

  for (int i = 4; i <= 100; i++) {
    isprime = 1;

    for (int j = 0; j < 100; j++) {
      if (primes[j] != 0 && i % primes[j] == 0) {
        isprime = 0;
        break;
      }
    }

    if (isprime) {
      primes[i] = i;
      printf("%d\n", i);
    }
  }
}
