#include<iostream>
#include<graphics.h>
#include<stdlib.h>

using namespace std;
int main()
{
    int gd=DETECT,gm,p1=50,p2=50,x=1;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
    int maxx = getmaxx();//639
    int maxy = getmaxy();//479
    line(maxx/2,0,maxx/2,maxy);
    line(0,maxy/2,maxx,maxy/2);
    for(int i=0;i<150;i++){
    putpixel(p1,p2,WHITE);
    putpixel(p1,maxy/2+(maxy/2-p2),GREEN);
    putpixel(maxx/2+(maxx/2-p1),p2,GREEN);
    p1++;
    p2++;
    delay(50);
    }
    getch();
}
