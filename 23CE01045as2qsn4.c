#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:",year);
    scanf("%d",&year);
    year%100==0?(year%400==0?printf("It is a leap year"):printf("It is not a leap year")):(year%4==0?printf("It is a leap year"):printf("It is not a leap year"));
    return 0;
}