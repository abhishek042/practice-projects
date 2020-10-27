#include<math.h>
#include<dos.h>
#include<iostream>
#include<graphics.h>
#include<conio.h>
void circleplot(int, int, int, int);
void midpoint(int xc, int yc, int r)
{
int x=0,y=r;
int p=(1-r);
putpixel(x,y,15);
circleplot(xc,yc,x,y);
while(x<y)
{
x++;
if(p<0)
{
p=p+2*x+1;
}
else
{
y--;
p=p+2*(x-y)+1;
}
circleplot(xc,yc,x,y);
delay(20);
}
}
void circleplot(int xc, int yc,int x,int y)
{
putpixel(xc+x,yc+y,15);
putpixel(xc-x,yc+y,15);
putpixel(xc+x,yc-y,15);
putpixel(xc-x,yc-y,15);
putpixel(xc+y,yc+x,15);
putpixel(xc-y,yc+x,15);
putpixel(xc+y,yc-x,15);
putpixel(xc-y,yc-x,15);
}
using namespace std;
int main()
{

int gd=DETECT,gm,a,b,c;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"enter center coordinates"<<endl;
cout<<"x:";
cin>>a;
cout<<"y:";
cin>>b;
cout<<"enter radius:";
cin>>c;
midpoint(a,b,c);
getch();
closegraph();
return 0;
}
