#include <stdio.h>
void main()
{
  printf("RA2211042010037\n");
  int a, b, r1, r2, r3, r4, r5;
  printf("Enter any two integer values : ");
  scanf("%d %d", &a, &b);
  r1 = a + b;
  r2 = a - b;
  r3 = a * b;
  r4 = a / b;
  r5 = a % b;
  printf("Sum = %d\n", r1);
  printf("Difference = %d\n", r2);
  printf("Product = %d\n", r3);
  printf("Division = %d\n", r4);
  printf("Remainder = %d\n", r5);
}
