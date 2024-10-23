#include<stdio.h>
#include<conio.h>
int main()
{
    int grade;
    printf("Enter a grade:");
    scanf("%d",&grade);

if (grade>100)
    {
        printf("invalid");
    }
    else if(grade>=80 && grade<100)
    {
        printf("grade A");
    }
    else if(grade>=60 && grade<=80)
    {
        printf("grade B");
    }
    else if(grade>=40 && grade<=60)
    {
        printf("grade C");
    }
    else if(grade>=20 && grade<=40)
    {
        printf("grade D");
    }
    else
    {
        printf("fail");
    }

    getch();
    return 0;


}
