#include <stdio.h>
#include <stdlib.h>

int main()
{
    float principal;
    float rate;
    float total;
    float interest;
    float days;
    printf("Enter loan principal(-1to end) :");
    scanf("%f",&principal);
    printf("Enter interest rate(-1to end) :");
    scanf("%f",&rate);
    printf("Enter term of the loan in days(-1to end) :");
    scanf("%f",&days);
    total=(days/365);
    interest=(principal*rate*total);
    //printf("Total is : %f\n",total);//
    printf("The interest charge is: %.2f ",interest);

    return 0;
}
