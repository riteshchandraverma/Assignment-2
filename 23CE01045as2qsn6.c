#include<stdio.h>
int main()
{
    int n;
    printf("Input a number:",n);
    scanf("%d",&n);
    n>100?(n<200?(n%2==0?printf("False"):printf("True")):printf("Number is out of range")):printf("Number is out of range");
    return 0;
}