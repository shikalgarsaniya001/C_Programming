#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("\n Enter a (1 to 7) :");
    scanf("\n %d",&day);

     switch(day)

    {
        case 1 : printf("\n Monday");
                 break;

        case 2 : printf("\n Tuesday");

        case 3 : printf("\n Wednesday");

        case 4 : printf("\n thursday");

        case 5 : printf("\n friday");
                  break;

        case 6 : printf("\n saturday");
                 break;

        case 7 : printf("\n sunday");
                 break;

    }
    getch();
    return 0;
}

