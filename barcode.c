/* Marial Gutierrez
 * Program that analyzes the bar code of products and verifies the product
 * with the last digit of the bar code */
#include <stdio.h>

int main (void)
{
int first, five_11, five_12, five_13, five_14, five_15,
    five_21, five_22, five_23, five_24, five_25, last;
    
// Prompt user to give you the bar code first integer
printf("Please enter the first single digit of your bar code: \n");
scanf("%1d", &first);
//Analyze type of product
    if (first == 0 || first == 7)
        printf("Your product is classified as General\n");
    else if (first == 2)
        printf("Your item is classified as a \"must weight\"\n");
    else if (first == 3)
        printf("Your item is classified as drugs and health related merchandise\n");
    else if (first ==5)
        printf("Your tem is a coupon\n");
//Prompt user to give you the rest of the bar code
printf("Please enter next five digits of your bar code: \n");
scanf("%1d%1d%1d%1d%1d", &five_11, &five_12, &five_13, &five_14, &five_15);
printf("Please enter next set of five digits of your bar code: \n");
scanf("%1d%1d%1d%1d%1d", &five_21, &five_22, &five_23, &five_24, &five_25);

// Calculate the last digit to verify the product
last = (((((((first + five_12 + five_14 + five_21 + five_23 + five_25) *3)
            + (five_11 + five_13 + five_15 + five_22 + five_24))-1)%10)-9)*-1);
printf("Your bar code's last digit should be %i\n", last);

}
