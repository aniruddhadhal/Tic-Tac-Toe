#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int in;
int i=0;
int r=100;
int op;
void view()
{
	system("cls");
	system("color 9");
	printf("\t\t\xB2\xB2  WELCOME \xB2\xB2\n");
	printf("\t\t Tic-Tac-Toe\n\n");
	printf("\t\t---|---|---\n");
	printf("\t\t %c | %c | %c \n",a[0],a[1],a[2]);
	printf("\t\t---|---|---\n");
	printf("\t\t %c | %c | %c \n",a[3],a[4],a[5]);
	printf("\t\t---|---|---\n");
	printf("\t\t %c | %c | %c \n",a[6],a[7],a[8]);
	printf("\nThe Symbol of Player1:O\n");
	printf("The Symbol of Player2:X\n");
	
}
void input()
{
	if(i%2==0)
	{
		printf("\nPlayer1 turn:\n");
		scanf("%d",&in);
		if(a[in-1]=='X'||a[in-1]=='O')
		{
			printf("\nSorry you are doing wrong :(\nYou miss your turn");
			getch();
		}
		else{
		a[in-1]='O';
		}
	}
	else if(i%2!=0)
	{
		printf("\nPlayer2 turn:\n");
		scanf("%d",&in);
		if(a[in-1]=='X'||a[in-1]=='O')
		{
			printf("\nSorry you are doing wrong :(\nYou miss your turn");
			getch();
		}
		else{
		a[in-1]='X';
		}
	}    
}
void play_computer()
{
		if(i%2==0)
	{
		printf("\nYour turn:\n");
		scanf("%d",&in);
		if(a[in-1]=='X'||a[in-1]=='O')
		{
			printf("\nSorry you are doing wrong :(\nYou miss your turn");
			getch();
		}
		else{
		a[in-1]='O';
		}
	}
	else if(i%2!=0)
	{
		label:
		in=rand()%8;
		if(a[in]=='X'||a[in]=='O')
		{
			goto label;
		}
		else{
		a[in]='X';
		}
	}    	 
}
int game_logic()
{
	if(a[0]==a[1] && a[0]==a[2] && a[1]==a[2])
	{
		if(a[0]=='X')
		{
			return 2;
		}
		if(a[0]=='O')
		{
			return 1;
		}	
	}
	else if(a[3]==a[4] && a[3]==a[5] && a[4]==a[5])
	{
		if(a[3]=='X')
		{
			return 2;
		}
		if(a[3]=='O')
		{
			return 1;
		}	
	}
	else if(a[6]==a[7] && a[6]==a[8] && a[7]==a[8])
	{
		if(a[6]=='X')
		{
			return 2;
		}
		if(a[6]=='O')
		{
			return 1;
		}	
	}
	else if(a[0]==a[4] && a[0]==a[8] && a[4]==a[8])
	{
		if(a[0]=='X')
		{
			return 2;
		}
		if(a[0]=='O')
		{
			return 1;
		}	
	}
	if(a[2]==a[4] && a[2]==a[6] && a[4]==a[6])
	{
		if(a[2]=='X')
		{
			return 2;
		}
		if(a[2]=='O')
		{
			return 1;
		}	
	}
	if(a[0]==a[3] && a[0]==a[6] && a[3]==a[6])
	{
		if(a[3]=='X')
		{
			return 2;
		}
		if(a[3]=='O')
		{
			return 1;
		}	
	}
	if(a[1]==a[4] && a[1]==a[7] && a[4]==a[7])
	{
		if(a[1]=='X')
		{
			return 2;
		}
		if(a[1]=='O')
		{
			return 1;
		}	
	}
	if(a[2]==a[5] && a[2]==a[8] && a[8]==a[5])
	{
		if(a[2]=='X')
		{
			return 2;
		}
		if(a[2]=='O')
		{
			return 1;
		}	
	}
	int x;
	int c=0;
	for(x=0;x<9;x++)
	{
		if(a[x]>='1' && a[x]<='9')
		c++;
	}
	if(c==0)
	{
		return 0;
	}	
}
int main()
{
	system("color 4");
	printf("\t\t\xB2\xB2  WELCOME \xB2\xB2\n");
	printf("\t\t Tic-Tac-Toe\n\n");
	int c=0;
	int x;
	printf("\nEnter 1 for playing with each other\nEnter 2 for playing with computer\n");
	scanf("%d",&op);
	while(1)
	{
	view();
	if(op==2)
	play_computer();
	else
	input();
	r=game_logic();
	if(r==1 || r==2)
	break;
	if(r==0)
	break;
	i++;	
	}
	view();
	if(r==1)
	{
		if(op==2)
		{
			printf("\nYou Win...");
		}
		else
		printf("\nPlayer1 Win:)");
	}
	else if(r==2)
	{
		if(op==2)
		{
			printf("\nComputer Win..");
		}
		else
		printf("\nPlayer2 Win:)");
	}
	else
	{
		printf("\nGameOver :|");
	}
	return 0;
}
