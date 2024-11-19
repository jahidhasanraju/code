#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;
// Driver code
int main()
{
    // gm is Graphics mode which is a computer display
    // mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
    int gd = DETECT, gm;
    char email[50]="mdjahidhasanraju@gmail.com";
    // location of left, top, right, bottom
    int left = 40, top = 120;
    int right = 600, bottom = 450;

    // initgraph initializes the graphics system
    // by loading a graphics driver from disk
    initgraph(&gd, &gm, "");

    // rectangle function
    rectangle(left, top, right, bottom);
    setfillstyle(SOLID_FILL,BLUE);
    settextstyle(7,HORIZ_DIR,4);
    outtextxy(260,180,"name");
    outtextxy(100, 200+8,email);
    floodfill(201,210,WHITE);
    delay(500);
    getch();

    // closegraph function closes the graphics
    // mode and deallocates all memory allocated
    // by graphics system .
    closegraph();

    return 0;
}
