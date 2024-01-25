#include<stdio.h>
int main()
{
    int cost,tip,tax,tipp,taxp;
    printf("Enter Meal Cost:\n");
    scanf("%d",&cost);
    printf("Enter Tip Percent:\n");
    scanf("%d",&tip);
    printf("Enter Tax Percent:\n");
    scanf("%d",&tax);
    tipp=tip*cost/100;
    taxp=tax*cost/100;
    printf("Meal's Total cost is:%d",cost+tipp+taxp);
    return 0;
}