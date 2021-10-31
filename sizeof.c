/* Print the size in memory used by various built in types */
#include "stdio.h"

int main() {
  printf("int size: %li bits\n", 8 * sizeof(int));
  printf("char size: %li bits\n", 8 * sizeof(char));
  printf("long size: %li bits\n", 8 * sizeof(long));
  printf("long long size: %li bits\n", 8 * sizeof(long long));
  printf("double size: %li bits\n", 8 * sizeof(double));
  printf("long double size: %li bits\n", 8 * sizeof(long double));
}
