#include <stdio.h>
#include <conio.h>
void check(char n1,char n2,char n3,char n4,char n5,char n6,char n7,char n8,char n9,char player1[20],char player2[20]);
void draw(char n1,char n2,char n3,char n4,char n5,char n6,char n7,char n8,char n9);
int main()
{
    char n1='1', n2='2', n3='3', n4='4', n5='5', n6='6', n7='7', n8='8', n9='9',player1[20],player2[20],symbol,choice;
    int turn=1;

   printf("enter name of player 1:\n");
    scanf("%s",&player1);

    printf("enter name of player 2:\n");
    scanf("%s",&player2);



    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

 while(turn<=9)
    {

        if(turn%2==1)
        {
            printf("%s select a number : \n",player1);
            choice = getche();
            symbol='0';
        }
        else
        {
            printf("%s select a number : \n",player2);
            choice = getche();
            symbol='x';
        }
       switch(choice)
       {
        case '1':
        {

        if(n1=='0' || n1=='x')
        {
            printf("\n place already occupied. Select a valid position.\n");
            continue;
        }
         n1=symbol;

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

        break;
       }
       case '2':
       {

        if(n2=='0' || n2=='x')
        {
            printf("\n place already occupied. Select a valid position.\n");
            continue;
        }
         n2=symbol;

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

        break;
       }
        case '3':
       {

        if(n3=='0' || n3=='x')
        {
            printf("\n place already occupied. Select a valid position.\n");
            continue;
        }
         n3=symbol;

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

        break;
       }
        case '4':
       {

        if(n4=='0' || n4=='x')
        {
            printf("\n place already occupied. Select a valid position.\n");
            continue;
        }
         n4=symbol;

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

        break;
       }
        case '5':
       {

        if(n5=='0' || n5=='x')
        {
            printf("\n place already occupied. Select a valid position.\n");
            continue;
        }
        n5=symbol;

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

        break;
       }
        case '6':
       {

        if(n6=='0' || n6=='x')
        {
            printf("\n place already occupied. Select a valid position.\n");
            continue;
        }
        n6=symbol;

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

        break;
       }
        case '7':
       {

        if(n7=='0' || n7=='x')
        {
            printf("\n place already occupied. Select a valid position.\n");
            continue;
        }
         n7=symbol;

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

        break;
       }
        case '8':
       {

        if(n8=='0' || n8=='x')
        {
            printf("\n place already occupied. Select a valid position.\n");
            continue;
        }
        n8=symbol;

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

        break;
       }
        case '9':
       {

        if(n9=='0' || n9=='x')
        {
            printf("\n place already occupied. Select a valid position.\n");
            continue;
        }
        n9=symbol;

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

        break;
       }

       }
if(turn>=5)
{
    check(n1,n2,n3,n4,n5,n6,n7,n8,n9,player1,player2);
}
if(turn==9)
{
    draw(n1,n2,n3,n4,n5,n6,n7,n8,n9);
}
       turn++;
}
return 0;
}
void check(char n1,char n2,char n3,char n4,char n5,char n6,char n7,char n8,char n9,char player1[20],char player2[20])

{
    while(1)
    {
    if(n1=='0' && n2=='0' && n3=='0' || n4=='0' && n5=='0' && n6=='0' || n7=='0' && n8=='0' && n9=='0' || n1=='0' && n4=='0' && n7=='0' || n2=='0' && n5=='0' && n8=='0' || n3=='0' && n6=='0' && n9=='0' || n1=='0' && n5=='0' && n9=='0' || n3=='0' && n5=='0' && n7=='0')
    {
        printf("\n");
        printf("%s won the game!!!\n",player1);
    }
    if(n1=='x' && n2=='x' && n3=='x' || n4=='x' && n5=='x' && n6=='x' || n7=='x' && n8=='x' && n9=='x' || n1=='x' && n4=='x' && n7=='x' || n2=='x' && n5=='x' && n8=='x' || n3=='x' && n6=='x' && n9=='x' || n1=='x' && n5=='x' && n9=='x' || n3=='x' && n5=='x' && n7=='x')
    {
         printf("\n");
         printf("%s won the game!!!\n",player2);
    }

}
}
void draw(char n1,char n2,char n3,char n4,char n5,char n6,char n7,char n8,char n9)
{
    if(n1!='0' && n2!='0' && n3!='0' || n4!='0' && n5!='0' && n6!='0' || n7!='0' && n8!='0' && n9!='0' || n1!='0' && n4!='0' && n7!='0' || n2!='0' && n5!='0' && n8!='0' || n3!='0' && n6!='0' && n9!='0' || n1!='0' && n5!='0' && n9!='0' || n3!='0' && n5!='0' && n7!='0' || n1!='x' && n2!='x' && n3!='x' || n4!='x' && n5!='x' && n6!='x' || n7!='x' && n8!='x' && n9!='x' || n1!='x' && n4!='x' && n7!='x' || n2!='x' && n5!='x' && n8!='x' || n3!='x' && n6!='x' && n9!='x' || n1!='x' && n5!='x' && n9!='x' || n3!='x' && n5!='x' && n7!='x')
{
    printf("The is drawn!!!\n");
}
}
