#include < studio.h>
main() 
{
  printf("RA2211042010037\n");
int digit_1 , digit_2 , digit_3 , digit_4, digit_5 , sum , number , n; 
scanf( "%d", &number); 
n = number; 
digit_1 = n % 10; 
n = n / 10; 
digit_2 = n % 10; 
n = n / 10; 
digit_4 = n %10; 
n = n / 10; 
digit_5 = n; 
sum = digit_1 + digit_2 + digit_3 + digit_4 + digit_5; 
printf("sum of digits = %d\n" , sum ) ; 
}
