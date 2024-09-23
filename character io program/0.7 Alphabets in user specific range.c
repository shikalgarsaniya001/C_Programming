#include<stdio.h>
#include<conio.h>
int main()
{
    char Spt='\0',Ept='\0';
    printf("Enter starting character :");
    scanf("%c",&Spt);
    printf("Enter end character :");
    scanf("%c",&Ept);
    printf("\n given letter from %c to %c is=\n",Spt,Ept);
    if(Spt<=Ept)

        {
             while(Spt<=Ept)
            printf("\n %c",Spt);
            Spt++;

        }
        else
        {
            while (Spt>=Ept)
            {
                printf("\n %c",Spt);
                Spt--;
            }
        }

        printf("\n\n thank you");
        getch();
        return 0;

}
