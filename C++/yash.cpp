#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<math.h>
#include<dos.h>

using namespace std;
double basis(int i, int k, double knot[], double stpos)
{
	double val;
	if(k==1)
	{
		if(knot[i]<=stpos && stpos<knot[i+1])
		return(1);
		else
		return(0);
	}
	val=((stpos-knot[i])*basis(i,k-1,knot,stpos))/(knot[i+k-1]-knot[i])+((knot[i+k]-stpos)*basis(i+1,k-1,knot,stpos))/(knot[i+k]-knot[i+1]);
	return val;
}
int main()
{
	int gd= DETECT, gm;
	initgraph(&gd,&gm, " ");
	int xc[6]={10,80,250,300,500,500};
	int yc[6]={180,130,10,400,50,70};
	double knot[]={0,1,2,3,4,5,6,7};
	int k=4;
	double bas,stpos,endpos,slice,x,y,lx,ly;
	stpos= knot[k-1],endpos=knot[8-k],slice=(endpos-stpos)/100;
	lx=xc[0];
	ly=yc[0];
	int i=0;
	for(stpos=1;stpos<endpos;stpos+=slice){
		x=y=0;
		for(int i=0;i<=5;i++){
			bas=basis(i,k,knot,stpos);
			x=x+xc[i]*bas;
			y=y+yc[i]*bas;
		}
		delay(10);
		line(lx,ly,x,y);
		lx=x;ly=y;
	}
	setcolor(4);
	for(i=0;i<6;i++)
	outtextxy(xc[i],yc[i],"*");
	getch();
	closegraph();
	return 0;
}
