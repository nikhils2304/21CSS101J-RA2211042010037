#include <stdio.h>

int main() {
    
    printf("RA2211042010037\n");
    double number, sum=0;
    
    do {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum+=number;
    }
    while (number != 0.0);
    
    printf("Sum = %.2lf",sum);
    
    return 0;
}     
