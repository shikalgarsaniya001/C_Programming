#include<stdio.h>
void Namaste();
void Bonjour();
int main()
{
    char ch;
    printf("\n Enter F for french and i for indian :");
    scanf("\n %c",&ch);
    if(ch=='i')
    {
       Namaste();
    }
    else
    {
        Bonjour();
    }
    getch();
    return 0;

}
void Namaste()
{
    printf("\n Namaste");
}
void Bonjour()
{
    printf("\n Bonjiour");
}
