/*BOW&ARROW- 1st year project created by Kritana Dahal Khatri and Pritika Sharma.*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
int i=0,j=300,m=0,k=0,maxx,maxy,arrows=0,ll,snd=0;
double score=0;
char a[4];

gameover()
{
 setcolor(BLACK);
 setfillstyle(SOLID_FILL,BLACK);
 bar(11,11,maxx-11,maxy-11);
 setfillstyle(SOLID_FILL,WHITE);
 bar(maxx/2-100,maxy/2-50,maxx/2+100,maxy/2+50);
 outtextxy(maxx/2-50,maxy/2-20,"Game Over..!");
 outtextxy(maxx/2-70,maxy/2,"Your score is:");
 setcolor(RED);
 outtextxy(maxx/2-200,maxy/2+90,"Press `Space Bar' to Contuinue and `Esc' to Exit.");
 gcvt(score,4,a);
 outtextxy(maxx/2+60,maxy/2,a);
 if(getch()==32)
 {
  arrows=0;
  score=0;
  main();
 }
 closegraph();
 clrscr();
 exit(0);
 return 0;
}

stick1(loc)
{
 snd=0;
 setcolor(BLACK);
 gcvt(score,4,a);
 outtextxy(330,40,a);

 setcolor(LIGHTGRAY);
 if(loc>=130 && loc<=140)
 {
  score=score+100;
  outtextxy(250,60,"Points: 100");
 }
 if(loc>=120 && loc<130)
 {
  score=score+70;
  outtextxy(250,60,"Points: 70");
 }
 if(loc>140 && loc<=150)
 {
  score=score+70;
  outtextxy(250,60,"Points: 70");
 }
 if(loc>=110 && loc<120)
 {
  score=score+50;
  outtextxy(250,60,"Points: 50");
 }
 if(loc>150 && loc<=160)
 {
  score=score+50;
  outtextxy(250,60,"Points: 50");
 }
 if(loc>=100 && loc<110)
 {
  score=score+40;
  outtextxy(250,60,"Points: 40");
 }
 if(loc>160 && loc<=170)
 {
  score=score+40;
  outtextxy(250,60,"Points: 40");
 }
 if(loc>=90 && loc<100)
 {
  score=score+35;
  outtextxy(250,60,"Points: 35");
 }
 if(loc>170 && loc<=180)
 {
  score=score+35;
  outtextxy(250,60,"Points: 35");
 }

 outtextxy(230,40,"Total Score:");
 gcvt(score,4,a);
 outtextxy(330,40,a);

 for(i=i;i<300;i++)
 {
  snd=snd+1;
  setfillstyle(SOLID_FILL,WHITE);
  setcolor(LIGHTGRAY);
  bar(20,20+i,25,110+i);
  setfillstyle(SOLID_FILL,DARKGRAY);
  bar(27,30+i,30,100+i);
  setfillstyle(SOLID_FILL,BLUE);
  bar(32,40+i,35,90+i);
  setfillstyle(SOLID_FILL,RED);
  bar(37,50+i,40,80+i);
  setfillstyle(SOLID_FILL,YELLOW);
  bar(42,60+i,45,70+i);

  setcolor(LIGHTCYAN);

  if(loc>=130 && loc<=140)
  {
   line(46,i-loc+200,66,i-loc+200);
   if(snd==1)
    sound(1500);
   if(snd==3)
    nosound();
   if(snd==5)
    sound(1500);
   if(snd==15)
    nosound();
  }
  if(loc>=120 && loc<130)
  {
   line(41,i-loc+200,61,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==15)
    nosound();
  }
  if(loc>140 && loc<=150)
  {
   line(41,i-loc+200,61,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==15)
    nosound();
  }
  if(loc>=110 && loc<120)
  {
   line(36,i-loc+200,56,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==20)
    nosound();
  }
  if(loc>150 && loc<=160)
  {
   line(36,i-loc+200,56,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==20)
    nosound();
  }
  if(loc>=100 && loc<110)
  {
   line(31,i-loc+200,51,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    nosound();
  }
  if(loc>160 && loc<=170)
  {
   line(31,i-loc+200,51,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    nosound();
  }
  if(loc>=90 && loc<100)
  {
   line(26,i-loc+200,46,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    sound(700);
   if(snd==25)
    nosound();
  }
  if(loc>170 && loc<=180)
  {
   line(26,i-loc+200,46,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    sound(700);
   if(snd==25)
    nosound();
  }

  delay(20);
  setcolor(BLACK);
  setfillstyle(SOLID_FILL,BLACK);
  bar(20,20+i,25,110+i);
  bar(27,30+i,30,100+i);
  bar(32,40+i,35,90+i);
  bar(37,50+i,40,80+i);
  bar(42,60+i,45,70+i);

  if(loc>=130 && loc<=140)
  line(46,i-loc+200,66,i-loc+200);
  if(loc>=120 && loc<130)
  line(41,i-loc+200,61,i-loc+200);
  if(loc>140 && loc<=150)
  line(41,i-loc+200,61,i-loc+200);
  if(loc>=110 && loc<120)
  line(36,i-loc+200,56,i-loc+200);
  if(loc>150 && loc<=160)
  line(36,i-loc+200,56,i-loc+200);
  if(loc>=100 && loc<110)
  line(31,i-loc+200,51,i-loc+200);
  if(loc>160 && loc<=170)
  line(31,i-loc+200,51,i-loc+200);
  if(loc>=90 && loc<100)
  line(26,i-loc+200,46,i-loc+200);
  if(loc>170 && loc<=180)
  line(26,i-loc+200,46,i-loc+200);

  if(kbhit())
  {
   int ch=getch();
   if(ch==27)
   {
    closegraph();
    exit(0);
   }
  }
 }
 i=0;j=300;k=0;

 setcolor(BLACK);
 if(loc>=130 && loc<=140)
  outtextxy(250,60,"Points: 100");
 if(loc>=120 && loc<130)
  outtextxy(250,60,"Points: 70");
 if(loc>140 && loc<=150)
  outtextxy(250,60,"Points: 70");
 if(loc>=110 && loc<120)
  outtextxy(250,60,"Points: 50");
 if(loc>150 && loc<=160)
  outtextxy(250,60,"Points: 50");
 if(loc>=100 && loc<110)
  outtextxy(250,60,"Points: 40");
 if(loc>160 && loc<=170)
  outtextxy(250,60,"Points: 40");
 if(loc>=90 && loc<100)
  outtextxy(250,60,"Points: 35");
 if(loc>170 && loc<=180)
  outtextxy(250,60,"Points: 35");
 if(arrows==10)
 {
  gameover();
 }
 target();
 return 0;
}

shoot()
{
 if(arrows==10)
 {
  gameover();
 }
 arrows=arrows+1;
 setcolor(0);
 for(ll=15;ll<=15*arrows;ll+=15)
 {
  outtextxy(550,40+ll,"_______");
  outtextxy(600,44+ll,"<");
  outtextxy(550,44+ll,"<");
 }
 a:
 for(i=i;i<300;i++)
 {
  if(k==350 && i>=110 && i<=160)
  {
   int loc=i;
   stick1(loc);
  }
  if(k==360 && i>=90 && i<=110)
  {
   int loc=i;
   stick1(loc);
  }
  if(k==360 && i>=160 && i<180)
  {
   int loc=i;
   stick1(loc);
  }

  if(k==400)
  {
   k=0;
   target();
  }
  k=k+10;
  setfillstyle(SOLID_FILL,WHITE);
  setcolor(LIGHTGRAY);
  bar(20,20+i,25,110+i);
  setfillstyle(SOLID_FILL,DARKGRAY);
  bar(27,30+i,30,100+i);
  setfillstyle(SOLID_FILL,BLUE);
  bar(32,40+i,35,90+i);
  setfillstyle(SOLID_FILL,RED);
  bar(37,50+i,40,80+i);
  setfillstyle(SOLID_FILL,YELLOW);
  bar(42,60+i,45,70+i);

  line(400-k,200,420-k,200);

  delay(20);
  setcolor(BLACK);
  setfillstyle(SOLID_FILL,BLACK);
  bar(20,20+i,25,110+i);
  bar(27,30+i,30,100+i);
  bar(32,40+i,35,90+i);
  bar(37,50+i,40,80+i);
  bar(42,60+i,45,70+i);

  line(400-k,200,420-k,200);


  if(kbhit())
  {
   int ch=getch();
   if(ch==27)
  {
   closegraph();
   exit(0);
  }
  }
 }
 i=0;j=300;
 if(arrows==10)
 {
  gameover();
 }
 goto a;
}

target()
{
 a:
 for(i=i;i<300;i++)
 {
  setfillstyle(SOLID_FILL,WHITE);
  bar(20,20+i,25,110+i);
  setfillstyle(SOLID_FILL,DARKGRAY);
  bar(27,30+i,30,100+i);
  setfillstyle(SOLID_FILL,BLUE);
  bar(32,40+i,35,90+i);
  setfillstyle(SOLID_FILL,RED);
  bar(37,50+i,40,80+i);
  setfillstyle(SOLID_FILL,YELLOW);
  bar(42,60+i,45,70+i);

  delay(20);
  setfillstyle(SOLID_FILL,BLACK);
  bar(20,20+i,25,110+i);
  bar(27,30+i,30,100+i);
  bar(32,40+i,35,90+i);
  bar(37,50+i,40,80+i);
  bar(42,60+i,45,70+i);
  if(kbhit())
  {
   int ch=getch();
   if(ch==27)
   {
    closegraph();
    exit(0);
   }
   if(ch==32 && m==0)
   {
    shoot();
   }
  }
 }
 i=0;j=300;
 goto a;
}

main()
{
 int gd=0,gm;
 initgraph(&gd,&gm,"C://TURBOC3//BGI");
 maxx=getmaxx();
 maxy=getmaxy();
 welcome();
 bow();
 setcolor(LIGHTGRAY);
 line(400,200,450,200);
 for(ll=15;ll<=150;ll+=15)
 {
  outtextxy(550,40+ll,"_______");
  outtextxy(600,44+ll,"<");
  outtextxy(550,44+ll,"<");
 }
 setcolor(LIGHTGRAY);
 outtextxy(470,15,"Press `Esc' to Quit");
 outtextxy(230,40,"Total Score:");
 gcvt(score,4,a);
 outtextxy(330,40,a);
 target();
 return 0;
}
bow()
{
setcolor(MAGENTA);
arc(460,200,120,245,50);
arc(461,200,120,245,50);
arc(462,200,120,245,50);
line(450,200,425,160);
line(450,200,425,240);
}
welcome()
{
 setcolor(WHITE);
 outtextxy(maxx/2-110,maxy/2-150,"--WELCOME TO BOW & ARROW--");
 outtextxy(maxx/2-120,maxy/2+80,"PRESS ANY KEY TO CONTINUE..!");
 setcolor(GREEN);
 outtextxy(maxx/2-120,maxy/2-100,"Instructions:");
 outtextxy(maxx/2-120,maxy/2-80,"You have 10 arrows");
 outtextxy(maxx/2-120,maxy/2-60,"Points are as follows:-");
 setcolor(YELLOW);
 outtextxy(maxx/2-100,maxy/2-40,"YELLOW->100 pts.");
 setcolor(RED);
 outtextxy(maxx/2-100,maxy/2-20,"RED->70 pts.");
 setcolor(BLUE);
 outtextxy(maxx/2-100,maxy/2,"BLUE->50 pts.");
 setcolor(DARKGRAY);
 outtextxy(maxx/2-100,maxy/2+20,"DARKGRAY->40 pts.");
 setcolor(WHITE);
 outtextxy(maxx/2-100,maxy/2+40,"WHITE->35 pts.");
 getch();
 setfillstyle(SOLID_FILL,BLACK);
 setcolor(BLACK);
 bar(maxx/2-150,maxy/2-180,maxx/2+140,maxy/2+110);
 return 0;
}
