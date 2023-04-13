#include <stdio.h>
#include <conio.h>
int main()
{
    char n1='1', n2='2', n3='3', n4='4', n5='5', n6='6', n7='7', n8='8', n9='9',player1[20],player2[20],symbol,choice;
    int turn=1;

    printf("enter name of player 1:\n");
    scanf("%s",&player1);

    printf("enter name of player 2:\n");
    scanf("%s",&player2);

    while(turn<=9)
    {

    printf("\n %c  |  %c |  %c\n", n1, n2, n3);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n4, n5, n6);
    printf("_______________\n");
    printf(" %c  |  %c |  %c\n", n7, n8, n9);
    printf("_______________\n");

    choice=getche();

        if(turn%2==1)
        {
            printf("turn of %s\n",player1);
            symbol='0';
        }
        else
        {
            printf("turn of %s\n",player2);
            symbol='1';
        }
       switch(choice)
       {
        case '1':
        {
        n1=symbol;
        if(n1=='0' || n1=='1')
        {
            printf("place aleady occupied. Select a valid position.\n");
            continue;
        }
        break;
       }
       case '2':
       {
         n2=symbol;
        if(n2=='0' || n2=='1')
        {
            printf("place aleady occupied. Select a valid position.\n");
            continue;
        }
        break;
       }
        case '3':
       {
         n3=symbol;
        if(n3=='0' || n3=='1')
        {
            printf("place aleady occupied. Select a valid position.\n");
            continue;
        }
        break;
       }
        case '4':
       {
         n4=symbol;
        if(n4=='0' || n4=='1')
        {
            printf("place aleady occupied. Select a valid position.\n");
            continue;
        }
        break;
       }
        case '5':
       {
         n5=symbol;
        if(n5=='0' || n5=='1')
        {
            printf("place aleady occupied. Select a valid position.\n");
            continue;
        }
        break;
       }
        case '6':
       {
         n6=symbol;
        if(n6=='0' || n6=='1')
        {
            printf("place aleady occupied. Select a valid position.\n");
            continue;
        }
        break;
       }
        case '7':
       {
         n7=symbol;
        if(n7=='0' || n7=='1')
        {
            printf("place aleady occupied. Select a valid position.\n");
            continue;
        }
        break;
       }
        case '8':
       {
         n8=symbol;
        if(n8=='0' || n8=='1')
        {
            printf("place aleady occupied. Select a valid position.\n");
            continue;
        }
        break;
       }
        case '9':
       {
         n9=symbol;
        if(n9=='0' || n9=='1')
        {
            printf("place aleady occupied. Select a valid position.\n");
            continue;
        }
        break;
       }
    turn++;
       }
}
return 0;
}
