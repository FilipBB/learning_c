/* Calculate the gross pay, taxes and net pay given number of hours worked */
#include <stdio.h>

int main() {
  int hours_worked = 0;
  printf("Enter the number of hours worked: ");
  scanf("%d", &hours_worked);

  float gross_pay;
  float taxes;
  float net_pay;
  float base_pay = 12.00;
  float overtime_rate = 1.5;

  if (hours_worked > 40) {
    gross_pay = (float)hours_worked * base_pay * overtime_rate;
  } else {
    gross_pay = (float)hours_worked * base_pay;
  }

  if (gross_pay <= 300.00) {
    taxes = gross_pay * 0.15;
    net_pay = gross_pay - taxes;
  } else if (gross_pay > 300 && gross_pay <= 450.00) {
    taxes = 300 * 0.15 + (gross_pay - 300) * 0.2;
    net_pay = gross_pay - taxes;
  } else {
    taxes =
        (gross_pay - 450) * 0.25 + (gross_pay - 450 - 300) * 0.2 + 300 * 0.15;
    net_pay = gross_pay - taxes;
  }

  printf("gross_pay: %.2f, taxes: %.2f, net_pay: %.2f\n", gross_pay, taxes,
         net_pay);
}
