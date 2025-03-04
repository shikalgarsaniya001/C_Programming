#include<stdio.h>
int main()
{
    float KilloMeter ,Meter;

    printf("\n Enter a distance of a KilloMeter ");
    scanf("\n %f",&KilloMeter);

    Meter =KilloMeter * 1000;

    printf("\n convertion of the Meter is %0.2f",Meter);

    return 0;
}
