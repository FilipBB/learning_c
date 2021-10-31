/* Calcuate yealy and monthly average rain fall given monthly rain fall counts
 */
#include <stdio.h>

#define YEARS 5
#define MONTHS 12

int main() {
  char *months[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int years[YEARS] = {2010, 2011, 2012, 2013, 2014};
  float rainfall[YEARS][MONTHS] = {
      {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
      {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
      {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
      {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
      {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
  float yearlyrainfall[YEARS] = {0};
  float monthlyaverages[MONTHS] = {0};
  float total = 0;
  float yearlyaverage = 0;
  float monthlyaverage = 0;
  float monthlytotal = 0;

  // calculate to rainfall for each year
  for (int year = 0; year < YEARS; year++) {
    float yeartotalrain = 0.0;
    for (int month = 0; month < MONTHS; month++) {
      yeartotalrain += rainfall[year][month];
      yearlyrainfall[year] = yeartotalrain;
    }
  }

  printf("YEAR\tTOTAL RAINFALL (in)\n");
  for (int year = 0; year < YEARS; year++) {
    printf("%d\t%.2f\n", years[year], yearlyrainfall[year]);
  }

  // calculate the yearly average
  for (int year = 0; year < YEARS; year++) {
    total += yearlyrainfall[year];
  }
  yearlyaverage = total / YEARS;
  printf("\nThe yearly average is %.2f\n", yearlyaverage);

  for (int month = 0; month < MONTHS; month++) {
    monthlytotal = 0;
    monthlyaverage = 0;
    for (int year = 0; year < YEARS; year++) {
      monthlytotal += rainfall[year][month];
    }
    monthlyaverage = monthlytotal / YEARS;
    monthlyaverages[month] = monthlyaverage;
  }

  printf("\n");
  for (int month = 0; month < MONTHS; month++) {
    printf("%s\t", months[month]);
  }
  printf("\n");
  for (int month = 0; month < MONTHS; month++) {
    printf("%.2f\t", monthlyaverages[month]);
  }
  printf("\n");
}
