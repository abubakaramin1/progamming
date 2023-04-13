#include<stdio.h>

int sum(int num1, int num2);
int subtractions(int num1, int num2);
int product(int num1, int num2);
float division(int num1, int num2);
float remain(int num1, int num2);
int pow(int num1,int num2);
int fact(int num1);

int main()
{
    int num1,num2,i,result;
    char ch;
    printf("enter 2 numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("enter A for addition, S for subtraction, P for product, D for division, R for remainder, F for factorial and Z for power \n");
    scanf(" %c",&ch);
switch(ch)
{
case 'A':
{
    printf("%d\n",sum(num1,num2));
    break;
}
case 'S':
{
    printf("%d\n",subtractions(num1,num2));
    break;
}
case 'P':
{
    printf("%d\n",product(num1,num2));
    break;
}
case 'D':
{
    printf("%f\n",division(num1,num2));
    break;
}
case 'R':
{
    printf("%f\n",remain(num1,num2));
    break;
}
case 'F':
{
    printf("%d\n",fact(num1));
    printf("%d\n",fact(num2));
    break;
}
case 'Z':
{
    printf("%d\n",pow(num1,num2));
    break;
}
default:
{
    printf("invalid input\n");
    break;
}
}

   return 0; 
}
int sum(int num1,int num2)
{
    return num1+num2;
}
int product(int num1,int num2)
{
    return num1*num2;
}
float division(int num1,int num2)
{
    return num1/num2;
}
float remain(int num1,int num2)
{
    return num1%num2;
}
int pow(int num , int base)
{
    int i =1;
    int result = 1;
    for(i=1;i<=base;i++)
    {
        result *=base;
    }
    return result;
}
int subtractions(int num1,int num2)
{
    return num1-num2;
}
int fact(int num1)

{int i ;
int result=1;
    for(i=1;i<=num1;i++)
    {
        result=result*i;
    }
return result;
}
