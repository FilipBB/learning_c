/* Practice with defining enums */
#include <stdio.h>

int main() {
  enum company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
  enum company google = GOOGLE;
  enum company ebay = EBAY;
  enum company xerox = XEROX;

  printf("%d\n", xerox);
  printf("%d\n", google);
  printf("%d\n", ebay);
}
