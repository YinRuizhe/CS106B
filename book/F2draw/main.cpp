/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "gwindow.h"

using namespace std;


void drawDiamond(GWindow &gw);
void drawRectangleAndOval(GWindow &gw);

int main()
{
    GWindow gw;
    drawDiamond(gw);
    drawRectangleAndOval(gw);

    return 0;
}

void drawDiamond(GWindow &gw){
    double width=gw.getWidth();
    double height=gw.getHeight();
    gw.setLineWidth(1);
    gw.setColor("BLACK");
    gw.drawLine(0,height/2,width/2,0);
    gw.drawLine(width/2,0,width,height/2);
    gw.drawLine(width,height/2,width/2,height);
    gw.drawLine(width/2,height,0,height/2);
}

void drawRectangleAndOval(GWindow &gw){
    double width=gw.getWidth();
    double height=gw.getHeight();
    gw.setColor("BLUE");
    gw.fillRect(width/4,height/4,width/2,height/2);
    gw.setColor("GRAY");
    gw.fillOval(width/4,height/4,width/2,height/2);
}
