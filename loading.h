#include<graphics.h>
void loading()//loading
{
    setcolor(YELLOW);
    settextstyle(3,0,8);
    outtextxy(525,250,"LOADING.....");
    setcolor(WHITE);
    rectangle(400,350,1000,400);
    settextstyle(3,0,6);
    outtextxy(950,450," 08%");
    delay(500);
    bar(405,355,405,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 16%");
    delay(500);
    bar(405,355,445,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 24%");
    delay(500);
    bar(405,355,495,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 32%");
    delay(500);
    bar(405,355,545,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 40%");
    delay(500);
    bar(405,355,595,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 48%");
    delay(500);
    bar(405,355,645,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 56%");
    delay(500);
    bar(405,355,695,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 64%");
    delay(1500);
    bar(405,355,745,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 71%");
    delay(500);
    bar(405,355,795,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 76%");
    delay(1500);
    bar(405,355,845,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 82%");
    delay(500);
    bar(405,355,895,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 88%");
    delay(2000);
    bar(405,355,945,395);
    settextstyle(3,0,6);
    outtextxy(950,450," 94%");
    delay(500);
    bar(405,355,995,395);
    settextstyle(3,0,6);
    outtextxy(950,450,"100%");
    delay(1000);
}
