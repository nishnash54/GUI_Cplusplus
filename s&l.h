#include<graphics.h>
#include<iostream>
struct move
{
       int x1,y1,x2,y2;
};
move pl1[]={{10,570,40,600},
                   {80,570,110,600},
                   {150,570,180,600},
                   {220,570,250,600},
                   {290,570,320,600},
                   {360,570,390,600},
                   {430,570,460,600},
                   {500,630,530,660},
                   {590,590,620,620},
                   {640,570,670,600},
                   {660,450,690,480},//10
                   {595,450,625,480},
                   {520,460,550,490},
                   {435,420,465,450},
                   {360,470,390,500},
                   {300,430,330,460},
                   {220,470,250,500},
                   {150,470,180,500},
                   {90,430,120,460},
                   {10,490,40,520},
                   {10,290,40,320},//20
                   {105,290,135,320},
                   {150,350,180,380},
                   {240,290,270,320},
                   {310,350,340,380},
                   {360,280,390,310},
                   {450,350,480,380},
                   {500,290,530,320},
                   {570,290,600,320},
                   {660,290,690,320},
                   {640,150,670,180},//30
                   {570,150,600,180},
                   {500,150,530,180},
                   {425,230,455,260},
                   {360,150,390,180},
                   {290,150,320,180},
                   {220,210,250,240},
                   {150,150,180,180},
                   {100,210,130,240},
                   {10,190,40,220},
                   {10,10,40,40},//40
                   {80,10,110,40},
                   {150,10,180,40},
                   {220,10,250,40},
                   {290,10,320,40},
                   {360,10,390,40},
                   {430,10,400,40},
                   {500,10,530,40},
                   {570,10,600,40},
                   {640,10,670,40},
                   {570,10,600,40},
                   {500,10,530,40},
                   {430,10,400,40},
                   {360,10,390,40},
                   {290,10,320,40}};
     move pl2[]={{10,630,40,600},
                   {80,630,110,660},
                   {150,630,180,660},
                   {220,630,250,660},
                   {290,630,320,660},
                   {360,630,390,660},
                   {430,630,460,660},
                   {500,630,530,660},
                   {570,630,600,660},
                   {640,630,670,660},
                   {640,490,670,520},//10
                   {570,490,600,520},
                   {500,490,530,520},
                   {450,520,480,550},
                   {380,510,410,540},
                   {290,490,320,520},
                   {220,510,250,540},
                   {175,510,205,540},
                   {80,490,110,520},
                   {10,490,40,520},
                   {10,350,40,380},//20
                   {105,380,135,410},
                   {150,350,180,380},
                   {240,350,270,380},
                   {310,350,340,380},
                   {355,320,385,350},
                   {450,380,480,410},
                   {500,350,530,380},
                   {570,320,600,350},
                   {640,340,670,370},
                   {640,210,670,240},//30
                   {570,210,600,240},
                   {520,210,550,240},
                   {425,230,455,260},
                   {360,210,390,240},
                   {315,210,345,240},
                   {220,240,250,270},
                   {150,210,180,240},
                   {80,240,110,270},
                   {30,230,60,260},
                   {10,70,40,100},//40
                   {80,70,110,100},
                   {170,100,200,130},
                   {220,50,250,80},
                   {290,70,320,100},
                   {360,70,390,100},
                   {430,70,400,100},
                   {500,70,530,100},
                   {570,70,600,100},
                   {640,70,670,100},
                   {570,70,600,100},
                   {500,70,530,100},
                   {430,70,400,100},
                   {360,70,390,100},
                   {290,70,320,100}};
void roll(int&);
void pos(int&,int,int);
void q_pos(int&,int,int,int&);
void check(int&,int&);

void snakes_n_ladders()
{
     settextstyle(3,0,3);
     int s,x,y,chance=-1,change=0;
     int pos1=0,pos2=0;
     int i1=0,i2=0,f1=0,f2=0;
     cleardevice();
    readimagefile("pics\\Board.jpg",0,0,700,700);
    readimagefile("pics\\s1.jpg",10,570,40,600);
    readimagefile("pics\\s2.jpg",10,630,40,600);
    //button
    readimagefile("pics\\Button.jpg",1050,50,1300,300);
    readimagefile("pics\\Playsl.jpg",750,50,1000,250);
    while(pos1!=49||pos2!=49)
    {
                             click:
                             int f=1;
                             while(f)
                             if(ismouseclick(WM_LBUTTONDOWN))
                             {
                                     getmouseclick(WM_LBUTTONDOWN,x,y);
                                     f=0;
                             }
                             clearmouseclick(WM_LBUTTONDOWN);
                             if(x>1050&&x<1300&&y>50&&y<300)
                             {
                                                            if(chance==-1)
                                                            {
                                                            roll(pos1);
                                                            f1=pos1;
                                                            pos(i1,f1,chance);
                                                            i1=f1;
                                                            if(pos1<43)
                                                            {
                                                            check(pos1,change);
                                                            f1=pos1;
                                                            }
                                                            if(pos1>49)
                                                            {int t=pos1-49;
                                                            pos1=49-t;
                                                            f1=i1=pos1;
                                                            }
                                                            if(change==1)
                                                            q_pos(i1,f1,chance,change);
                                                            }
                                                            else
                                                            {
                                                            roll(pos2);
                                                            f2=pos2;
                                                            pos(i2,f2,chance);
                                                            i2=f2;
                                                            if(pos2<43)
                                                            {
                                                            check(pos2,change);
                                                            f2=pos2;
                                                            }
                                                            if(pos2>49)
                                                            {int t=pos2-49;
                                                            pos2=49-t;
                                                            f2=i2=pos2;
                                                            }
                                                            if(change==1)
                                                            q_pos(i2,f2,chance,change);
                                                            }
                                                            if(pos1==49)
                                                            {
                                                                        outtextxy(200,200, "player 1 wins !!!");
                                                                        break;
                                                            }
                                                            if(pos2==49)
                                                            {
                                                                        outtextxy(200,200, "player 2 wins !!!");
                                                                        break;
                                                            }
                               chance*=-1;
                               readimagefile("pics\\Button.jpg",1050,50,1300,300);
                               delay(200);
                               readimagefile("pics\\Black.jpg",750,500,1300,600);
                               }
                               else 
                               goto click;
    }
    getch();
}
void roll(int& pos)
{
     int roll;
     srand(time(NULL) );
     roll=(rand()%6)+1;
     pos+=roll;
     switch(roll)
     {
                 case 1:
                      {
                               readimagefile("pics\\dice1.jpg",1050,50,1300,300);
                               break;
                      }
                 case 2:
                      {
                               readimagefile("pics\\dice2.jpg",1050,50,1300,300);
                               break;
                      }
                 case 3:
                      {
                               readimagefile("pics\\dice3.jpg",1050,50,1300,300);
                               break;
                      }
                 case 4:
                      {
                               readimagefile("pics\\dice4.jpg",1050,50,1300,300);
                               break;
                      }
                 case 5:
                      {
                               readimagefile("pics\\dice5.jpg",1050,50,1300,300);
                               break;
                      }
                 case 6:
                      {
                               readimagefile("pics\\dice6.jpg",1050,50,1300,300);
                               break;
                      }
                 }
}
void check(int& pos,int& change)
{
     if(pos==7)
     {
               outtextxy(750,500,"CLIMB UP THE LADDER TO 29!!");
               pos=29;
               change=1;
     }
     else if(pos==19)
     {
               outtextxy(750,500,"CLIMB UP THE LADDER TO 21!!");
               pos=21;
               change=1;
     }
     else if(pos==24)
     {
               outtextxy(750,500,"CLIMB UP THE LADDER TO 43!!");
               pos=43;
               change=1;
     }
      else if(pos==22)
     {
               outtextxy(750,500,"SNAKE!!GO BACK TO 16");
               pos=16;
               change=1;
     }
      else if(pos==33)
     {
               outtextxy(750,500,"SNAKE!!GO BACK TO 28");
               pos=28;
               change=1;
     }
      else if(pos==42)
     {
               outtextxy(750,500,"SNAKE!!GO BACK TO 39");
               pos=39;
               change=1;
     }
     delay(800);
}
void pos(int& in,int fi,int chance)
{
     int q;
     void *t;
     if(chance==-1)
     {
     q=imagesize(pl1[in].x1,pl1[in].y1,pl1[in].x2,pl1[in].y2);
    t=malloc(q);
     for(int z=in;z<fi;z++)
     {
    getimage(pl1[z].x1,pl1[z].y1,pl1[z].x2,pl1[z].y2,t);
    putimage(pl1[z+1].x1,pl1[z+1].y1,t,XOR_PUT);
    readimagefile("pics\\Black.jpg",pl1[z].x1,pl1[z].y1,pl1[z].x2,pl1[z].y2);
    delay(200);
    }
    }
    else
    {
    q=imagesize(pl2[in].x1,pl2[in].y1,pl2[in].x2,pl2[in].y2);
    t=malloc(q);
     for(int z=in;z<fi;z++)
     { 
    getimage(pl2[z].x1,pl2[z].y1,pl2[z].x2,pl2[z].y2,t);
    putimage(pl2[z+1].x1,pl2[z+1].y1,t,XOR_PUT);
    readimagefile("pics\\Black.jpg",pl2[z].x1,pl2[z].y1,pl2[z].x2,pl2[z].y2);
    delay(200);
    }
    }
}
void q_pos(int& in,int fi,int chance,int& change)
{
     if(chance==-1)
     {
                   readimagefile("pics\\Black.jpg",pl1[in].x1,pl1[in].y1,pl1[in].x2,pl1[in].y2);
                   readimagefile("pics\\s1.jpg",pl1[fi].x1,pl1[fi].y1,pl1[fi].x2,pl1[fi].y2);
     }
     else
     {
         readimagefile("pics\\Black.jpg",pl2[in].x1,pl2[in].y1,pl2[in].x2,pl2[in].y2);
         readimagefile("pics\\s2.jpg",pl2[fi].x1,pl2[fi].y1,pl2[fi].x2,pl2[fi].y2);
     }
     change=0;
     in=fi;
}
