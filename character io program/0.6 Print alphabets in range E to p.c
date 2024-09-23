#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n given letter from E to P \n");
    ch='E';
    while(ch<='p')
    {
        printf("\n %c ",ch);
        ch++;
    }
    getch();
    return 0;
}



