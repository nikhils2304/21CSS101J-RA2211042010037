#include <stdio.h>

int main() {
    printf("RA2211042010037\n");
    int amount_given,bill_amount,quotient,reminder;
    scanf("%d",&amount_given);
    scanf("%d",&bill_amount);
    quotient = amount_given/bill_amount;
    reminder = amount_given%bill_amount;
    printf("%d\n",quotient);
    printf("%d",reminder);

    return 0;
}
