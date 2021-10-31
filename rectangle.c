/* Calculate the perimeter and area of a rectangle */
#include <stdio.h>
int main(int argc, char *argv[]) {
  double width = 10;
  double height = 20;
  double perimeter;
  double area;

  perimeter = width * 2 + height * 2;
  area = width * height;

  printf("Perimeter %.2f\n", perimeter);
  printf("Area %.2f\n", area);
}
