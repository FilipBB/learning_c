/* Calculate the number of years and days given a number of minutes */
#include <stdio.h>

int main() {
  double min_in_year = 60 * 12 * 365;
  double min_in_day = 60 * 12;
  int minutes;

  printf("Enter the number of minutes: ");
  scanf("%d", &minutes);

  double num_years = (double)minutes / min_in_year;
  double num_days = (double)minutes / min_in_day;

  printf("Number of years: %.2f\n", num_years);
  printf("Number of days: %.2f\n", num_days);
}
