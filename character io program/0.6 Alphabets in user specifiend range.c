#include<stdio.h>
#include<conio.h>
int main()
{
    char spt='\0',ept='\0';
    printf("Enter starting character :");
    scanf("%c",&spt);
    printf("Enter end character :");
    scanf("%c",&ept);
    printf("\n given letter from %c to %c is=\n",spt,ept);

        {
             while(spt<=ept)
            printf("\n %c",spt);
            spt++;
        }

        printf("\n\n thank you");
        getch();
        return 0;

}
