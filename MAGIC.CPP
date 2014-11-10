#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
char A[]={'A','2','3','4','5','6','7','8','9','10','J','Q','K'};
void Android()
{
	line(50,63,44,58);
	line(63,63,68,58);
	arc(57,75,0,180,12);
	line(45,75,69,75);
	rectangle(39,77,43,95);
	rectangle(71,77,75,95);
	rectangle(45,77,69,100);
	rectangle(52,100,48,115);
	rectangle(62,100,66,115);
}
void Layout1()
{
	for(int i=1;i<16;i++)
	{
		gotoxy(i,1);
		cout<<'-';
		gotoxy(i,10);
		cout<<'_';
	}
	for( i=1;i<11;i++)
	{
		gotoxy(1,i);
		cout<<'|';
		gotoxy(15,i);
		cout<<'|';
	}

}
void Layout2()
{
	for(int i=1;i<16;i++)
	{
		gotoxy(i,1);
		cout<<'-';
		gotoxy(i,10);
		cout<<'_';
	}
	for( i=1;i<11;i++)
	{
		gotoxy(1,i);
		cout<<'[';
		gotoxy(15,i);
		cout<<']';
	}
}
void Card1()
{
	Layout1();
	setcolor(1);
	getcolor();
	Android();
}
void Card2()
{
	Layout1();
	setcolor(2);
	getcolor();
	Android();
}
void Card3()
{
	Layout2();
	setcolor(4);
	getcolor();
	Android();
}
void Card4()
{
	Layout1();
	setcolor(5);
	getcolor();
	Android();
}
void main()
{
	clrscr();
	int gdriver= DETECT , gmode, i,a,f;
	char z,m;
	randomize();
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI ");
	do
	{
	for(i=0;i<53;i++)
	{
		int x=random(4);
		switch(x)
		{
			case 0: Card1();
				break;
			case 1: Card2();
				break;
			case 2: Card3();
				break;
			default: Card4();
		}
		settextstyle(1,0,8);
		char y=A[random(13)];
		gotoxy(3,2);
		cout<<y;
		gotoxy(13,9);
		cout<<y;
		if(i==32)
		{
		       a=x;
		       z=y;
		       delay(200);
		}
		else
		{
			delay(30);
		}

	}
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI ");
	setbkcolor(0);
	getbkcolor();
	cout<<"DID YOU GOT UR CARD (Y/N)";
	cin>>m;
	} while(m=='N'||m=='n');
	clrscr();
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI ");
	setbkcolor(0);
	getbkcolor();
	settextstyle(5,0,20);
	cout<<"::SO I M GONNA DISPLAY U D CARD DAT IS IN UR MIND:::"
	    <<"   \n           BE HONEST    IF U R NOT DEN TTYM....."
	    <<"\nARE YOU READY TO SEE IT ...\n PRESS 1 \nELSE TTYM ";
	cin>>f;
	clrscr();
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI ");
	setbkcolor(0);
	getbkcolor();
	if(f==1)
	{
		switch(a)
		{
			case 0: Card1();
				break;
			case 1: Card2();
				break;
			case 2: Card3();
				break;
			default: Card4();
		}
		gotoxy(3,2);
		cout<<z;
		gotoxy(13,9);
		cout<<z;
	}
	else
	{
		cout<<"TTYM MEANS TALK TO MY HAND:: ";
	}
	getch();
	closegraph();
}