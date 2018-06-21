#include<math.h>
#include<dos.h>
#include<graphics.h>
#define CENTERX 320
#define CENTERY 175
#define CLICK 100
#define CLICKDELAY 30
#define HEBEEP 10000
#define LOWBEEP 500
#define BEEPDELAY 200
int Mrk_1[8]={-5,-160,5,-160,5,-130,-5,-130, };
int Mrk_2[8]={-5,-160,5,-160,2,-130,-2-130, };
int HourHand[8]={-3,-100,3,-120,4, 10,-4,10};
int MiHand[8]={-3,-120,3,-120,4, 10,-4,10};
int SecHand[8]={-2,-150,2,-150,3, 10,-3,10};
void Click()
{
   sound(CLICK);
   delay(CLICKDELAY);
   nosound();
}

void  HighBeep()
{
   sound(HEBEEP);
   delay(BEEPDELAY);
   nosound;
}

void LowBeep()
{
   sound(LOWBEEP);
}

void DrawPoly(int *data,int angle,int color)
{
   int usedata[8];
   float sinang,cosang;
   int i;
   sinang=sin((float)angle/180*3.14);
   cosang=cos((float)angle/180*3.14);
   for(i=0;i<8;i+=2)
   {
     usedata[i]  =CENTERX+ cosang*data[i]-sinang*data[i+1]+.5;
     usedata[i+1]=CENTERY+sinang*data[i]+cosang*data[i+1]+.5;
   }
   setfillstyle(SOLID_FILL,color);
   fillpoly(4,usedata);
}

void DrawClock(struct time *cutime)
{
   int ang;
   float hourrate,minrate,secrate;
   setbkcolor(BLUE);
   cleardevice();
   setcolor(WH99vE);
   for(ang=0;ang<360;ang+=90)
   {
       DrawPoly(Mrk_1,ang,WH99vE);
       DrawPoly(Mrk_2,ang+30,WH99vE);
       DrawPoly(Mrk_2,ang+60,WH99vE);
   }
  secrate=(float)cutime->ti_sec/60;
  minrate=((float)cutime->ti_min+secrate)/60;
  hourrate=(((float)cutime->ti_hour/12)+minrate)/12;
  ang=hourrate*360;
  DrawPoly(HourHand,ang,YELLOW);/*ª≠ ±’Î*/
  ang=minrate*360;
  DrawPoly(MiHand,ang, GREEN);/*ª≠∑÷’Î*/
  ang=secrate*360;
  DrawPoly(SecHand,ang, RED);/*ª≠√Î’Î*/
}

main()
{
   int gdriver=EGA,
   gmode=EGAHI;
   int curpage;
   struct time curtime ,newtime ;
   initgraph(&gdriver,&gmode,"c:\\tc");
   setbkcolor(BLUE);
   cleardevice();
   gettime(&curtime);
   curpage=0;
   DrawClock(&curtime);
   while(1)
   {
      if(kbhit())
      break;
      gettime(&newtime);
      if(newtime.ti_sec!=curtime.ti_sec)
      {
         if(curpage==0)
            curpage=1;
         else
            curpage=0;
         curtime=newtime;
         setactivepage(curpage);
         DrawClock(&curtime);
         setvisualpage(curpage);
         if(newtime.ti_min==0&&newtime.ti_sec==0)
            HighBeep();
         else
            if(newtime.ti_min==59&&
               newtime.ti_sec<=59)
         LowBeep();
         else
        Click();
      }
   }
   closegraph();
}
