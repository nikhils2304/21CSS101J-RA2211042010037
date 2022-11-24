#include <stdio.h>
int main() {
  printf("RA2211042010037\n");
  int months, days;
  printf("Enter days\n");
  scanf("%d",&days);
  months=days\30;
  days=days%30;
  printf("Months = %d Days = %d", months, days);
}
