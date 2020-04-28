//*******************************************************
//           HEADER  FILE  FOR  WELCOME  PAGE
//*******************************************************

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void welcmpg()
{
   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
   setbkcolor(14);
     for(int i=0;i<4; i++)
     {
	setcolor(1+i);
	settextstyle(0,0,4+i);
	outtextxy(175-15*i,68,"WELCOME");
	delay(200);
	cleardevice();
     }
     setcolor(8);

     for(i=0;i<4; i++)
     {
	setcolor(1+i);
	settextstyle(0,0,4+i);
	outtextxy(300-15*i,200,"TO");
	delay(200);
	cleardevice();
     }
     for(i=0;i<4; i++)
     {
	setcolor(1+i);
	settextstyle(0,0,2+i);
	outtextxy(200-16*i,368,"BOOK-A-HOLIC");
	delay(200);
	cleardevice();
     }
     setcolor(4);
     settextstyle(0,0,7);

     /******************************************************************
     TITLE
     ******************************************************************/

     outtextxy(130,68,"WELCOME");

     outtextxy(270,200,"TO");
     settextstyle(0,0,5);

     outtextxy(65,368,"BOOK-A-HOLIC");
     setcolor(8);
     line(19,2,19,479);
     line(0,461,638,461);
     line(619,2,619,478);
     line(0,19,637,19);

     /******************************************************************
     BOOK 1
     ******************************************************************/

     setcolor(1);
     setlinestyle(0,SOLID_LINE,3);
     line(27,230,64,323);
     line(106,192,142,280);
     line(101,287,142,280);
     line(101,287,64,323);
     line(71,219,27,230);
     line(71,219,106,192);
     line(71,219,101,287);
     /******************************************************************
     BOOK 2
     ******************************************************************/

     floodfill(71,225,1);
     floodfill(114,258,1);
     line(520,135,548,174);
     line(548,174,527,236);
     line(548,174,600,166);
     line(600,166,558,271);
     line(527,236,558,271);
     line(479,241,520,135);
     line(479,241,527,236);
     floodfill(518,201,1);
     floodfill(554,228,1);

getch();
closegraph();
}