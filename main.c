#include <stdio.h>
#include <stdlib.h>
int count = 1;
char a = ' ' , b = ' ', c = ' ', d = ' ', e = ' ' , f = ' ', g = ' ', h= ' ', i = ' ';
char Player1[10], Player2[10];

void matrix_layout() // This function is to Display Layout
{
    printf("\t\t\t\t\t");printf ("\n \n Hello all , following matrix gives idea about the positions in the table : \n \n ");
    printf("\t\t\t\t\t");printf("  1 |  2 |  3 \n");
    printf("\t\t\t\t\t");printf("---- ---- ----\n");
    printf("\t\t\t\t\t");printf("  4 |  5 |  6 \n");
    printf("\t\t\t\t\t");printf("---- ---- ----\n");
    printf("\t\t\t\t\t");printf("  7 |  8 |  9 \n");

}

int winner () // This function check if any of the players has won the game or not before it could let next player to give input
{
    if ((a=='x'&& b=='x' && c=='x')||(d=='x'&& e=='x' && f=='x')||(g=='x'&& h=='x' && i=='x')||(a=='x'&& d=='x' && g=='x')||(b=='x'&& e=='x' && h=='x')||(c=='x'&& f=='x' && i=='x')||(a=='x'&& e=='x' && i=='x')||(c=='x'&& e=='x' && g=='x'))
    {
        printf("\n %s is winner", Player1);
        count =10;
        return;
    }
    else if ((a=='0'&& b=='0' && c=='0')||(d=='0'&& e=='0' && f=='0')||(g=='0'&& h=='0' && i=='0')||(a=='0'&& d=='0' && g=='0')||(b=='0'&& e=='0' && h=='0')||(c=='0'&& f=='0' && i=='0')||(a=='0'&& e=='0' && i=='0')||(c=='0'&& e=='0' && g=='0'))
    {
        printf("\n %s is winner", Player2);
        count = 10;
        return;
    }
    else
        return;

}

int Player1Plays() // This function is to take inputs from Player 1 Only
{
    int choice;
    printf("%s , Please enter your choice : ", Player1);
    scanf("%d",&choice );
    if(choice == 1)
    {
        if(a == ' ')
         a = 'x';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player2);
            Player1Plays();
            return 0;
        }

    }
    else if (choice == 2)
    {
        if(b == ' ')
         b = 'x';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player2);
            Player1Plays();
            return 0;
        }
    }
    else if (choice == 3)
    {
        if(c == ' ')
         c = 'x';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n ",Player2);
            Player1Plays();
            return 0;
        }
    }
    else if (choice == 4)
    {
        if(d == ' ')
         d = 'x';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player2);
            Player1Plays();
            return 0;
        }
    }
    else if (choice == 5)
    {
        if(e == ' ')
         e = 'x';
        else
        {
            printf("\n value is already consumed by %s please chose different value ",Player2);
            Player1Plays();
            return 0;
        }
    }
    else if (choice == 6)
    {
        if(f == ' ')
         f = 'x';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player2);
            Player1Plays();
            return 0;
        }
    }
    else if (choice == 7)
    {
        if(g == ' ')
         g = 'x';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player2);
            Player1Plays();
            return 0;
        }
    }
    else if (choice == 8)
    {
        if(h == ' ')
         h = 'x';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player2);
            Player1Plays();
            return 0;
        }
    }
    else if (choice == 9)
    {
        if(i == ' ')
         i = 'x';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player2);
            Player1Plays();
            return 0;
        }
    }
    count++;
    ThreeByThree ( a ,  b ,  c ,  d ,  e ,  f , g, h , i);


}

int Player2Plays() // This function is to take inputs from Player 2 Only
{
    int choice;
    printf("%s , Please enter your choice : ", Player2);
    scanf("%d",&choice );
    if(choice == 1)
    {
        if(a == ' ')
         a = '0';
        else
        {
            printf("value is already consumed by %s please chose different value \n",Player1);
            Player2Plays();
            return 0;
        }

    }
    else if (choice == 2)
    {
        if(b == ' ')
         b = '0';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player1);
            Player2Plays();
            return 0;
        }
    }
    else if (choice == 3)
    {
        if(c == ' ')
         c = '0';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player1);
            Player2Plays();
            return 0;
        }
    }
    else if (choice == 4)
    {
        if(d == ' ')
         d = '0';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player1);
            Player2Plays();
            return 0;
        }
    }
    else if (choice == 5)
    {
        if(e == ' ')
         e = '0';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player1);
            Player2Plays();
            return 0;
        }
    }
    else if (choice == 6)
    {
        if(f == ' ')
         f = '0';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player1);
            Player2Plays();
            return 0;
        }
    }
    else if (choice == 7)
    {
        if(g == ' ')
         g = '0';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player1);
            Player2Plays();
            return 0;
        }
    }
    else if (choice == 8)
    {
        if(h == ' ')
         h = '0';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player1);
            Player2Plays();
            return 0;
        }
    }
    else if (choice == 9)
    {
        if(i == ' ')
         i = '0';
        else
        {
            printf("\n value is already consumed by %s please chose different value \n",Player1);
            Player2Plays();
            return 0;
        }
    }
    count++;
    ThreeByThree ( a ,  b ,  c ,  d ,  e ,  f , g, h , i);

}

void ThreeByThree ( a ,  b ,  c ,  d ,  e ,  f , g, h , i) // This functions outputs the updated matrix after every input
{
    printf("\n");
    printf("\t\t\t\t\t");printf(" %c  |  %c  | %c \n", a ,b,c);
    printf("\t\t\t\t\t");printf("---- ---- ----\n");
    printf("\t\t\t\t\t");printf(" %c  |  %c  | %c \n", d ,e,f);
    printf("\t\t\t\t\t");printf("---- ---- ----\n");
    printf("\t\t\t\t\t");printf(" %c  |  %c  | %c \n", g ,h,i);
    printf("\n");
    winner();
    return;

}

int main()
{

    printf ("\n Please enter name of player 1 : ");
    scanf("%s",&Player1);
    printf ("\n Please enter name of player 2 : ");
    scanf("%s",&Player2);

    matrix_layout();
    while (count <=9)
    {

        if (count <=9)
        {
            Player1Plays();
            if (count<=9) // If at some point Player 1 is won then Player2's input should not be taken
                Player2Plays();
        }

    }
    printf("\n Thank you %s and %s for playing with us ", Player1,Player2);
    printf("\n \n GAME OVER \n \n");
    return 0;
}

/* Bug 1 :

If you enter the field that is already consumed by the other player then the output is shown multiple times
This bug need to be fixed

*/

// Bug 1 Resolved 
