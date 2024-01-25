#include<stdio.h>
int main()
{
    int n;
    printf("Enter total number of days",n);
    scanf("%d",&n);

    printf("Years = %d\n",n/365);

    int a;
    a=n%365;
    printf("Months = %d\n",a/30);

    int b;
    b=a%30;
    printf("Weeks = %d\n",b/7);

    int c;
    c=b%7;
    printf("Days = %d\n",c);
    return 0;
}