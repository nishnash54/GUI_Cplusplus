#include<graphics.h>
struct points
{
       int p1,p2,p3,p4,c,m,n;
};
void tic_tac_toe()
{
     cleardevice();
char ch[3][3];
    int x,y,a=1;
    int i,j;
    points p[]={{50,70,210,230,0,0,0},
          {250,70,430,230,0,0,1},
          {480,70,640,230,0,0,2},
          {50,260,210,450,0,1,0},
          {250,260,430,450,0,1,1},
          {480,260,640,450,0,1,2},
          {50,490,210,640,0,2,0},
          {250,490,430,640,0,2,1},
          {480,490,640,640,0,2,2}
          };
    readimagefile("pics\\matrix.jpg",0,0,700,700);
    readimagefile("pics\\Playttt.jpg",1050,50,1300,300);
    for(i=0;i<9;i++)
    {
    int play;
    if(i%2==0)
    play=0;
    else
    play=1;
    click :
    int f=1,z=1;
    while(f)
    if(ismouseclick(WM_LBUTTONDOWN))
    {
                                     getmouseclick(WM_LBUTTONDOWN,x,y);
                                     f=0;
                                     
    }
    clearmouseclick(WM_LBUTTONDOWN);
    for(j=0;j<9;j++)
    {
            if(x>p[j].p1&&x<p[j].p3&&y>p[j].p2&&y<p[j].p4)
            {
                               if(p[j].c==0)
                               {
                                                          if(play==0)
                                                          {
                                                                     readimagefile("pics\\X.jpg",p[j].p1,p[j].p2,p[j].p3,p[j].p4);
                                                                     p[j].c=1;
                                                                     z=0;
                                                                     ch[p[j].m][p[j].n]='X';
                                                          }
                                                          else
                                                          {
                                                              readimagefile("pics\\O.jpg",p[j].p1,p[j].p2,p[j].p3,p[j].p4);
                                                              p[j].c=1;
                                                              z=0;
                                                              ch[p[j].m][p[j].n]='O';
                                                          }
                               break;
                               }
                               else
                               goto click;
            }
    }
    if(z==1)
    goto click;
    if(i>=4)
    {
            if((ch[0][0]=='X'&&ch[0][1]=='X'&&ch[0][2]=='X')||(ch[0][0]=='X'&&ch[1][1]=='X'&&ch[2][2]=='X')||(ch[1][0]=='X'&&ch[1][1]=='X'&&ch[1][2]=='X')||(ch[2][0]=='X'&&ch[2][1]=='X'&&ch[2][2]=='X')||(ch[0][0]=='X'&&ch[1][0]=='X'&&ch[2][0]=='X')||(ch[0][1]=='X'&&ch[1][1]=='X'&&ch[2][1]=='X')||(ch[0][2]=='X'&&ch[1][2]=='X'&&ch[2][2]=='X')||(ch[0][2]=='X'&&ch[1][1]=='X'&&ch[2][0]=='X'))
            {
            outtextxy(750,500,"PLAYER 1 WINS!!");
            break;
            }
            else if((ch[0][0]=='O'&&ch[0][1]=='O'&&ch[0][2]=='O')||(ch[0][0]=='O'&&ch[1][1]=='O'&&ch[2][2]=='O')||(ch[1][0]=='O'&&ch[1][1]=='O'&&ch[1][2]=='O')||(ch[2][0]=='O'&&ch[2][1]=='O'&&ch[2][2]=='O')||(ch[0][0]=='O'&&ch[1][0]=='O'&&ch[2][0]=='O')||(ch[0][1]=='O'&&ch[1][1]=='O'&&ch[2][1]=='O')||(ch[0][2]=='O'&&ch[1][2]=='O'&&ch[2][2]=='O')||(ch[0][2]=='O'&&ch[1][1]=='O'&&ch[2][0]=='O'))
            {
            outtextxy(750,500,"PLAYER 2 WINS!!");
            break;
            }
            if(i==8)
            outtextxy(750,500,"DRAW!!");
    }
    }
    getch();
}
