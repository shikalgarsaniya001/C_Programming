#include<stdio.h>

void printkarad();
void printshenoli();
void printrethare();

int main()
{
    printf("Enter a character ");

    char ch;

    scanf("%c",&ch);

    printkarad();

    return 0;
}
void printkarad()
{
    printf(" karad pin:");
    printf("415107\n ");

    printshenoli();

    printrethare();


}
void printshenoli()
{
    printf("shenoli pin:");
    printf(" 415108");
}
void printrethare()
{
    printf("rethare pin");
    printf(" 415106");
}


