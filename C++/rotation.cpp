#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>

using namespace std;
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2;
    double s,c, angle;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	printf("Enter coordinates of line: ");
    cin>>x1>>y1>>x2>>y2;
    line(x1,y1,x2,y2);
    cout<<"Enter rotation angle: ";
    cin>>angle;
    c = cos(angle *3.14/180);
    s = sin(angle *3.14/180);
    x1 = x1 * c - y1 * s ;
    y1 = x1 * s + y1 * c;
    x2 = x2 * c - y2 * s;
    y2 = x2 * s + y2 * c;
    cleardevice();
    setcolor(2);
    line(x1, y1 ,x2, y2);
    getch();
    closegraph();

    getch();
}
