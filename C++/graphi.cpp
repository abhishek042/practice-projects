// C++ Implementation for drawing line
#include <graphics.h>


// driver code
int main()
{
    // gm is Graphics mode which is a computer display
    // mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
    int gd = DETECT;

    int gm;

    initgraph(&gd, &gm, "");

    // line for x1, y1, x2, y2
    line(150, 150, 450, 150);


    getch();


    closegraph();
}
