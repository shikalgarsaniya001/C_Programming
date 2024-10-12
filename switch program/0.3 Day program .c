#include<stdio.h>
#include<conio.h>
int main()
{
    char day;
    printf("\n Enter a (1 to 7) :");
    scanf("\n %c",&day);

     switch(day)

    {
        case 'A' : printf("\n Monday");
                 break;

        case 'B' : printf("\n Tuesday");
                   break;

        case 'C' : printf("\n Wednesday");
                  break;

        case 'D' : printf("\n thursday");
                   break;

        case 'E' : printf("\n friday");
                  break;

        case 'F' : printf("\n saturday");
                 break;

        case 'G'
         : printf("\n sunday");
                 break;

    }
    getch();
    return 0;
}

