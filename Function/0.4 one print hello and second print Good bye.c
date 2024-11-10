#include<stdio.h>
void printHello();
void printGoodbye();

int main()
{
    printHello();
   printGoodbye();
    printHello();
    printHello();
     printGoodbye();

    getch();
    return 0;
}
void printHello()
{
    printf("\n Hello");
}
void printGoodbye()
{
    printf("\n Good bye");
}
