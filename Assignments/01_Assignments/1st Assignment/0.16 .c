#include<stdio.h>
int main()
{
    float fahrenheit ,celsius;

    printf("\n Enter a TEMP is fahrenheit :");
    scanf("\n %f",&fahrenheit);

    celsius=(fahrenheit-32)*(5.0/9.0);

    printf("\n convertion of the celsius is %f",celsius);

    return 0;
}

