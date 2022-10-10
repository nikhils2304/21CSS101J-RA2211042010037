#include <stdio.h>

int main()
{
  float farenheit, celcius;
  printf("RA2211042010037");
  printf("Enter the temperaturenin farenheit: ");
  scanf("%f", &farenheit);
  celcius = 5.0/9.0*(farenheit-32.0);
  printf("temperature is :%f", celcius);
  return 0;
}
