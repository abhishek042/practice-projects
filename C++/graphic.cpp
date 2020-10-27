#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;

int main()
{


	int g=DETECT,d;
	 char driver[]="C:\\TC\\BGI";

       initgraph(&g,&d,driver);
       putpixel(100,100,RED);
       getch();
       return 0;

}
