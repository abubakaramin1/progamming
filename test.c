#include<stdio.h>
int main(void)
{
    int units;
    float bill,TotalBill;
    printf("enter units:\n");
    scanf("%d",&units);
    if (units<=300)
    {

     bill = units*3;

    printf("The total bill is:%.2f\n",bill);}
    else
        bill=units*3.5;
    TotalBill=bill+0.05*bill;
        printf("The total bill is:%.2f\n",TotalBill);

    return 0;
}
