#include<stdio.h>
#include<windows.h>
int win(char a[],char c)
{
  if(a[0]==c && a[1]==c && a[2]==c)
  {
    return 1;
  }
  else if(a[3]==c && a[4]==c && a[5]==c)
  {
    return 1;
  }
  else if(a[6]==c && a[7]==c && a[8]==c)
  {
    return 1;
  }
  else if(a[0]==c && a[3]==c && a[6]==c)
  {
    return 1;
  }
  else if(a[1]==c && a[4]==c && a[7]==c)
  {
    return 1;
  }
  else if(a[2]==c && a[5]==c && a[8]==c)
  {
    return 1;
  }
  else if(a[0]==c && a[4]==c && a[8]==c)
  {
    return 1;
  }
  else if(a[2]==c && a[4]==c && a[6]==c)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  system("Color 0A");
  printf("-----------------------------------------------------TIC TAC TOE--------------------------------------------------------\n\n");
  printf(" Welcome to the most played 2D game and a sort of fun using x and o\n\n");
  printf(" Rules :-\n\n");
  printf(" 1 : Player should select only the symbol x or o , if we choose other symbol it will again ask input \n");
  printf(" 2 : Each player will be entering the number ranging from 1 to 9 only to put respective x or o in the desired position\n");
  printf(" 3 : If you enter any symbol other than numbers to mark the symbols x or o ,then the program will be corrupted\n");
  printf(" 4 : Once you have marked on the table cannot be unchanged,so please be careful!\n");
  printf(" 5 : Player who gets a combination of 3 same characters either diagonal or horizontally or vertically will be declared \n  as the winner");
  printf("\n\n Enjoy the game! Be a Winner!\n\n");
  char p1[100];
  char p2[100];
  char a[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
  int s;
  char s1,s2;
  printf("Enter name of player1: ");
  scanf("%s",p1);
  printf("\nEnter name of player2: ");
  scanf("%s",p2);
  printf("\n%s chooses ",p1);
  while(s1!='x' && s1!='o')
  {
    scanf("%c",&s1);
  }
  if(s1=='x')
  {
    s2='o';
  }
  else
  {
    s2='x';
  }
  system("cls");
  system("color 74");
  printf("\nInitial tic tac toe table\n\n");
  printf(" %c | %c | %c \n",a[0],a[1],a[2]);
  printf("___ ___ ___\n");
  printf(" %c | %c | %c \n",a[3],a[4],a[5]);
  printf("___ ___ ___\n");
  printf(" %c | %c | %c \n",a[6],a[7],a[8]);
  int flag=0;
  while(a[0]==' ' || a[1]==' ' || a[2]==' ' || a[3]==' ' || a[4]==' ' || a[5]==' ' || a[6]==' ' || a[7]==' ' || a[8]==' ')
  {
    if(win(a,s2))
    {
      flag=1;
      system("color 47");
      printf("\n%s won the game\n",p2);
      break;
    }
    else
    {
      if(a[0]==' ' || a[1]==' ' || a[2]==' ' || a[3]==' ' || a[4]==' ' || a[5]==' ' || a[6]==' ' || a[7]==' ' || a[8]==' ')
      {
        printf("\n%s ",p1);
        printf("Chooses ");
        scanf("%d",&s);
        if(!(s>=1 && s<=9))
        {
          printf("\nBad! You have choosen incorect one ! Wait for your next chance\n");
        }
        else
        {
          if(a[s-1]==' ')
          {
            a[s-1]=s1;
          }
          printf("\n\n %c | %c | %c \n",a[0],a[1],a[2]);
          printf("___ ___ ___\n");
          printf(" %c | %c | %c \n",a[3],a[4],a[5]);
          printf("___ ___ ___\n");
          printf(" %c | %c | %c \n",a[6],a[7],a[8]);
        }
      }
    }
    if(win(a,s1))
    {
      flag=1;
      system("color 47");
      printf("\n%s won the game\n",p1);
      break;
    }
    else
    {
      if(a[0]==' ' || a[1]==' ' || a[2]==' ' || a[3]==' ' || a[4]==' ' || a[5]==' ' || a[6]==' ' || a[7]==' ' || a[8]==' ')
      {
        printf("\n%s ",p2);
        printf("Chooses ");
        scanf("%d",&s);
        if(!(s>=1 && s<=9))
        {
          printf("\nBad! You have choosen incorect one ! Wait for your next chance\n");
        }
        else
        {
          if(a[s-1]==' ')
          {
            a[s-1]=s2;
          }
          printf("\n\n %c | %c | %c \n",a[0],a[1],a[2]);
          printf("___ ___ ___\n");
          printf(" %c | %c | %c \n",a[3],a[4],a[5]);
          printf("___ ___ ___\n");
          printf(" %c | %c | %c \n",a[6],a[7],a[8]);
        }
      }
    }
  }
  if(!flag)
  {
    system("color 47");
    printf("\nOH NO!!!!! DRAW MATCH .....\n");
  }
  return 0;
}
