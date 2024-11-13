#include<stdio.h>
#include<conio.h>
int Add(int N1, int N2)
{
    int Ans=0;
    Ans = N1 + N2;
    return Ans;
}


int main()
{
    int Num1 = 0, Num2 = 0, Res = 0;
    printf("\n Enter a first  Number  =  ");
    scanf("%d",&Num1);
    printf("\n Enter a secound number = ");
    scanf("%d",&Num2);
    Res = Add(Num1 , Num2);
    printf("\n Addition of %d and %d is = %d",Num1,Num2,Res);


    getch();
    return 0;

}
