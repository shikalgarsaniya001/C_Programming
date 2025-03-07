#include<stdio.h>
#include<conio.h>
int main()
{
    int No1, No2;

    printf("\n Enter a 1st number :");
    scanf("%d",&No1);

    printf("\n Enter a 2nd number :");
    scanf("%d",&No2);


    printf("\n Before Swap : Number 1st =%d, Number 2nd =%d",No1,No2);

        No1= No1 +No2;
        No2=No1-No2;
        No1=No1-No2;

    printf("\n After Swap : Number 1st =%d, Number 2nd =%d",No1,No2);
    getch();
    return 0;


}
