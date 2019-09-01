#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void shufftling()
{
    int i;
    char b=219;
    for(i=0;i<50;i++)
    {
        printf("%c",b);
        Sleep(25);
    }
}
void guessgame(int bet_amount,int* inhand_cash)
{
    int i,temp,player_guess,x,y;
    char Hole[]={'N','R','N'};
    system("cls");
    printf("\n\n\n\n\n\t\t\tWait ! Rat Is Shuffling its position...\n\n\n\n\n\t\t");
    shufftling();
    srand((time(NULL)));
    for(i=0;i<5;i++)
    {
        x=rand()%3;
        y=rand()%3;
        temp=Hole[x];
        Hole[x]=Hole[y];
        Hole[y]=temp;
    }
    system("cls");
    printf("\nEnter Your Guess:");
    scanf("%d",&player_guess);
    if(Hole[player_guess-1]=='R')
    {
        (*inhand_cash)+=2*bet_amount;
        printf("\nYou Win ! The Holes Are As Follows:");
        printf("\n%c %c %c ",Hole[0],Hole[1],Hole[2]);
        printf("\n\nYour Inhand Cash is now:%d",*inhand_cash);
    }
    else
    {
        (*inhand_cash)-=bet_amount;
        printf("\nYou Loose !! \nThe Position of Holes are as Follows:");
        printf("\n%c %c %c ",Hole[0],Hole[1],Hole[2]);
        printf("\n\nYour Inhand Cash is now:%d",*inhand_cash);
    }
}
int main()
{
    int inhand_cash,bet_amount;
    printf("\n\n\n\n\n\n");
    printf("\t\t  THE RAT GUESSING GAME!!\n");
    printf("\n\t\t\t ->Developed By - SARWAR ALI<-\n");
    printf("\n\t\t\t  Visit  Github-sarwar1227\n");
    printf("\n\tCheckout Source Code at:https://github.com/sarwar1227/guess_the_rat");
    printf("\n\n\t\tPress Any Key...\n\n");
    getch();
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\tLOADING...\n\n\t\t\t");
    for(int i=0;i<25;i++)
        {
            printf("%c",b);
            Sleep(25);
        }
    system("cls");
    printf("Enter Your Inhand Cash:");
    scanf("%d",&inhand_cash);
    while(inhand_cash>0)
    {
        printf("\n\nEnter Betting Amount:");
        scanf("%d",&bet_amount);
        if(inhand_cash==0 || inhand_cash<bet_amount)
        break;
    guessgame(bet_amount,&inhand_cash);
    }
    if(inhand_cash==0 || inhand_cash<bet_amount)
    {
        system("cls");
        printf("\n\nAww...You Lost and Out Of Cash\n\nBetter Luck Next time\n\nThank You For Playing !!\n\n");
    }
return 0;
}
