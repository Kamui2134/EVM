#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

double sinus(double x1)
{
    double a, s1;
    a = x1; s1 = x1;
    for (int i = 1; i <= 100; i++)
    {
	a = -a*x1*x1 / (2 * i*(2 * i + 1));
	s1 += a;
    }
	return s1;
}

double cosinus(double x1) {
    double a, s1;
    a = 1; s1 = 1;
    for (int i = 1; i <= 100; i++)
    {
	a = -a*x1*x1 / (2 * i*(2 * i - 1));
	s1 += a;
    }
	return s1;
}


void main()
{
int gdriver = DETECT,gmode;
double x,y,x0,y0,y01,x1,y1;

	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	settextstyle(7,HORIZ_DIR,4);
	outtextxy(0,0, "FUNCTION: sin^3x + cos^2x");
	settextstyle(7,HORIZ_DIR,1);
	outtextxy(5, y, "0");
	outtextxy((3.14*8)*20,y, "pi*8");
	outtextxy((3*3.14/2)*20,y, "3*pi/2");
	line( 0, y, x*2, y);
	line( 0, 0, 0, y*2);
	line((3*3.14/2)*20, 0, (3*3.14/2)*20, y*2);
	line((8*3.14*20), 0, (8*3.14*20), y*2);
	setcolor(GREEN);
	bar3d(0, 50, 100, 85, 0, 0);
	outtextxy(5, 55, "max = 1");
	setcolor(WHITE);
	x0 = 3.14*3/2;

	while( x0 < 3.14*8)
	{
	y01 = 0;
	y0 = 0;
	x0 += 0.05;

	y0 = sinus(x0);
	y0 *= y0*y0;
	y01 = cosinus(x0);
	y01 *= y01;
	y0 += y01;

	x1 = 0 + 20*x0;
	y1 = y -20*y0;
	if (kbhit()) {
		break;
	}
	delay(100);
	putpixel(x1, y1, 3);
	}
getch();
cleardevice();
}