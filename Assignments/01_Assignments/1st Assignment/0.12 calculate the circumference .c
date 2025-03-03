#include<stdio.h>
int main()
{
    float radius, PI =3.14, circum;

    printf("\n  Enter a radius :");
    scanf("%f",& radius);

    circum  = 2 * PI * radius;

    printf("\n circumference is %f",circum);

    getch();
    return 0;
}
