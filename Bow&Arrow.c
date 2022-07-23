/*Bow & Arrow - first semester c project created by Pritika Sharma & Kritana Dahal Khatri.*/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
int gd=0,gm;
initgraph(&gd,&gm,"C://TURBOC3/BGI");

setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(450,150,50);
floodfill(450,150,WHITE);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(450,150,40);
floodfill(450,150,BLACK);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
circle(450,150,30);
floodfill(450,150,BLUE);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(450,150,20);
floodfill(450,150,RED);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(450,150,10);
floodfill(450,150,YELLOW);
setcolor(BROWN);
line(400,150,400,250);
line(500,150,500,250);

setcolor(WHITE);
line(81,285,75,340);
line(75,340,125,375);
setcolor(MAGENTA);
setlinestyle(SOLID_LINE,1,THICK_WIDTH);
arc(100,330,300,110,50);
setcolor(DARKGRAY);
line(75,340,165,296);
setcolor(LIGHTGRAY);
line(75,340,70,337);
line(75,340,74,347);
line(165,296,155,295);
line(165,296,160,305);

getch();
return 0;
}
