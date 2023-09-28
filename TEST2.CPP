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
	outtextxy(0,0, "MEGA FUNCTION");
	settextstyle(7,HORIZ_DIR,3);
	outtextxy(x, y, "0");
	outtextxy(x+(3.14*8)*10,y, "pi*8");
	outtextxy(x+(3*3.14/2)*10,y, "3*pi/2");
	line( 0, y, x*2, y);
	line( x, 0, x, y*2);
	line( x+(3*3.14/2)*10, 0, x+(3*3.14/2)*10, y*2);
	line( x+(8*3.14*10), 0, x+(8*3.14*10), y*2);
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

	x1 = x + 10*x0;
	y1 = y -10*y0;
	if (kbhit()) {
		break;
	}
	delay(100);
	putpixel(x1, y1, 3);
	}
getch();
cleardevice();
}