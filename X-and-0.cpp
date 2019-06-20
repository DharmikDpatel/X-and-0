#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int pos[9]={0,0,0,0,0,0,0,0,0};
void board()
{
	setcolor(YELLOW);
	line(100,0,100,300);
	line(200,0,200,300);
	line(0,100,300,100);
	line(0,200,300,200);
	outtextxy(90,90,"1");
	outtextxy(190,90,"2");
	outtextxy(290,90,"3");
	outtextxy(90,190,"4");
	outtextxy(190,190,"5");
	outtextxy(290,190,"6");
	outtextxy(90,290,"7");
	outtextxy(190,290,"8");
	outtextxy(290,290,"9");
	setcolor(BLACK);
	if(pos[0] == 1)
	{
		setcolor(RED);
		line(20,20,80,80);
		line(80,20,20,80);
		setcolor(BLACK);
	}
	else if(pos[0] == 2)
	{
		setcolor(BLUE);
		circle(50,50,40);
		setcolor(BLACK);
	}
	if(pos[1] == 1)
	{
		setcolor(RED);
		line(120,20,180,80);
		line(180,20,120,80);
		setcolor(BLACK);
	}
	else if(pos[1] == 2)
	{
		setcolor(BLUE);
		circle(150,50,40);
		setcolor(BLACK);
	}
	if(pos[2] == 1)
	{
		setcolor(RED);
		line(220,20,280,80);
		line(280,20,220,80);
		setcolor(BLACK);
	}
	else if(pos[2] == 2)
	{
		setcolor(BLUE);
		circle(250,50,40);
		setcolor(BLACK);
	}
	if(pos[3] == 1)
	{
		setcolor(RED);
		line(20,120,80,180);
		line(80,120,20,180);
		setcolor(BLACK);
	}
	else if(pos[3] == 2)
	{
		setcolor(BLUE);
		circle(50,150,40);
		setcolor(BLACK);
	}
	if(pos[4] == 1)
	{
		setcolor(RED);
		line(120,120,180,180);
		line(180,120,120,180);
		setcolor(BLACK);
	}
	else if(pos[4] == 2)
	{
		setcolor(BLUE);
		circle(150,150,40);
		setcolor(BLACK);
	}
	if(pos[5] == 1)
	{
		setcolor(RED);
		line(220,120,280,180);
		line(280,120,220,180);
		setcolor(BLACK);
	}
	else if(pos[5] == 2)
	{
		setcolor(BLUE);
		circle(250,150,40);
		setcolor(BLACK);
	}
	if(pos[6] == 1)
	{
		setcolor(RED);
		line(20,220,80,280);
		line(80,220,20,280);
		setcolor(BLACK);
	}
	else if(pos[6] == 2)
	{
		setcolor(BLUE);
		circle(50,250,40);
		setcolor(BLACK);
	}
	if(pos[7] == 1)
	{
		setcolor(RED);
		line(120,220,180,280);
		line(180,220,120,280);
		setcolor(BLACK);
	}
	else if(pos[7] == 2)
	{
		setcolor(BLUE);
		circle(150,250,40);
		setcolor(BLACK);
	}
	if(pos[8] == 1)
	{
		setcolor(RED);
		line(220,220,280,280);
		line(280,220,220,280);
		setcolor(BLACK);
	}
	else if(pos[8] == 2)
	{
		setcolor(BLUE);
		circle(250,250,40);
		setcolor(BLACK);
	}

}
void main()
{
	int gd=DETECT,gm;
	int flag = 0,ch;
	char strch[10],i,count=0;
	initgraph(&gd,&gm," ");
	board();
	while(1)
	{
		board();
		if(
		pos[0] == 1 && pos[1] == 1 && pos[2] == 1 ||
		pos[3] == 1 && pos[4] == 1 && pos[5] == 1 ||
		pos[6] == 1 && pos[7] == 1 && pos[8] == 1 ||
		pos[0] == 1 && pos[3] == 1 && pos[6] == 1 ||
		pos[1] == 1 && pos[4] == 1 && pos[7] == 1 ||
		pos[2] == 1 && pos[5] == 1 && pos[8] == 1 ||
		pos[0] == 1 && pos[4] == 1 && pos[8] == 1 ||
		pos[2] == 1 && pos[4] == 1 && pos[6] == 1
		)
		{
			cleardevice();
			setcolor(GREEN);
			outtextxy(250,250,"Player 1 Won!");
			break;
		}
		if(
		pos[0] == 2 && pos[1] == 2 && pos[2] == 2 ||
		pos[3] == 2 && pos[4] == 2 && pos[5] == 2 ||
		pos[6] == 2 && pos[7] == 2 && pos[8] == 2 ||
		pos[0] == 2 && pos[3] == 2 && pos[6] == 2 ||
		pos[1] == 2 && pos[4] == 2 && pos[7] == 2 ||
		pos[2] == 2 && pos[5] == 2 && pos[8] == 2 ||
		pos[0] == 2 && pos[4] == 2 && pos[8] == 2 ||
		pos[2] == 2 && pos[4] == 2 && pos[6] == 2
		)
		{
			cleardevice();
			setcolor(GREEN);
			outtextxy(250,250,"Player 2 Won!");
			break;
		}
		if(
		pos[0] != 0 && pos[1] != 0 && pos[2] != 0 &&
		pos[3] != 0 && pos[4] != 0 && pos[5] != 0 &&
		pos[6] != 0 && pos[7] != 0 && pos[8] != 0)
		{
			cleardevice();
			setcolor(GREEN);
			outtextxy(250,250,"Try Again!");
			break;
		}
		if(flag == 0)
		{
			setcolor(RED);
			outtextxy(100,400,"Enter Player 1's Choice : ");
			for(i=0;i<9;i++)
			{
				if(pos[i] == 0)
				{
					itoa(i+1,strch,10);
					outtextxy(100 + count,410,strch);
					count += 10;
				}
			}
			count = 0;
			//scanf("%d",&ch);
			strch[0] = getch();
			ch = atoi(strch);
			setcolor(BLACK);
			if(ch<=0 || ch>9)
			{
				cleardevice();
				setcolor(GREEN);
				outtextxy(250,250,"Try Again!");
				break;
			}
			pos[ch-1] = 1;
			flag = 1;
		}
		else
		{
			setcolor(BLUE);
			outtextxy(100,400,"Enter Player 2's Choice : ");
			for(i=0;i<9;i++)
			{
				if(pos[i] == 0)
				{
					itoa(i+1,strch,10);
					outtextxy(100 + count,410,strch);
					count += 10;
				}
			}
			count = 0;
			//scanf("%d",&ch);
			strch[0] = getch();
			ch = atoi(strch);
			setcolor(BLACK);
			if(ch<=0 || ch>9)
			{
				cleardevice();
				setcolor(GREEN);
				outtextxy(250,250,"Try Again!");
				break;
			}
			pos[ch-1] = 2;
			flag = 0;
		}
		cleardevice();

	}
	getch();
}