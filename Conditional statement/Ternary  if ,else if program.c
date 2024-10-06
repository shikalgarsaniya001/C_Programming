#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("\n Enter a age :");
    scanf("\n %d",& age);

    age>=18? printf("\n adult "):printf("\n not adult");
    getch();
    return 0;
}
