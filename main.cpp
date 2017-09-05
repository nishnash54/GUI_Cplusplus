#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<stdio.h>
#include<graphics.h>
#include"loading.h"
#include"uploading.h"
#include"tic-tac-toe.h"
#include"s&l.h"
#include"movies.h"
using namespace std;
void loading();
void menu();
void uploading();
void movies();
void games();
void credits();
void instructions();
void instructions_g();
void click(int,int,int);
void check_1(int,int);
void check_2(int,int);
void check_3(int,int);
void check_4(int,int);
void check_5(int,int);
int check_6(int,int);
void hindi();
void english();
void tic_tac_toe();
void snakes_n_ladders();
void seats();
int find_seat();
void kfp(int);
void im3(int);
void i3(int);
void bmb(int);
int x,y;
int name1;
int main()
{
    initwindow(1350,700,"desktop mall");
    //loading();
    read();
    menu();
}
void menu()
{
    cleardevice();
    readimagefile("pics\\menu.jpg",0,0,1350,700);
    click(x,y,0);
    //rectangle(130,30,450,490);//movies
    //rectangle(550,30,840,490);//games
    //rectangle(960,30,1260,490);//food
    //rectangle(130,530,840,670);//instructions
    //rectangle(960,530,1260,670);//exit
}
void click(int x,int y,int k)
{
     int flag=1;
     while(flag)
     if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x,y);
                                     flag=0;
                                     
     }
     clearmouseclick(WM_LBUTTONDOWN);
     if(k==0)
     check_1(x,y);
     else if(k==1)
     check_2(x,y);
     else if(k==3)
     check_3(x,y);
     else if(k==4)
     check_4(x,y);
     else if(k==5)
     check_5(x,y);
     else if(k==6)
     kfp(check_6(x,y));
     else if(k==7)
     im3(check_6(x,y));
     else if(k==8)
     i3(check_6(x,y));
     else if(k==9)
     bmb(check_6(x,y));
}
void check_1(int x,int y)
{
     if(x>130&&x<450&&y>30&&y<490)
     movies();
     else if(x>550&&x<840&&y>30&&y<490)
     games();
     else if(x>960&&x<1260&&y>30&&y<490)
     {
          credits();
          menu();
     }
     else if(x>130&&x<840&&y>530&&y<670)
     {
          instructions();
          menu();
     }
     else if(x>960&&x<1260&&y>530&&y<670)
     exit1();
     else
     menu();
}
void check_2(int x,int y)
{
     if(x>100&&x<450&&y>30&&y<490)
     {
     snakes_n_ladders();
     games();
     }
     else if(x>550&&x<890&&y>30&&y<490)
     {
     tic_tac_toe();
     games();
     }
     else if(x>960&&x<1260&&y>30&&y<490)
     menu();
     if(x>100&&x<890&&y>530&&y<670)
     {
     instructions_g();
     games();
     }
     else if(x>960&&x<1260&&y>530&&y<670)
     exit1();
     else
     games();
}
void check_3(int x,int y)
{
     if(x>20&&x<1320&&y>30&&y<240)
     english();
     else if(x>20&&x<1320&&y>260&&y<470)
     hindi();
     else if(x>90&&x<640&&y>490&&y<680)
     menu();
     else if(x>720&&x<1280&&y>490&&y<680)
     {
          password();
          movies();
     }
     else
     movies();
}
void check_4(int x,int y)
{
     if(x>20&&x<1320&&y>30&&y<240)
     {
     readimagefile("pics\\kfp.jpg",0,0,1350,700);
     click(x,y,6);
     }
     else if(x>20&&x<1320&&y>260&&y<470)
     {
     readimagefile("pics\\im3.jpg",0,0,1350,700);
     click(x,y,7);
     }
     else if(x>90&&x<640&&y>490&&y<680)
     movies();
     else if(x>720&&x<1280&&y>490&&y<680)
     exit1();
     else
     english();
}
void check_5(int x,int y)
{
     if(x>20&&x<1320&&y>30&&y<240)
     {
     readimagefile("pics\\3i.jpg",0,0,1350,700);
     click(x,y,8);
     }
     else if(x>20&&x<1320&&y>260&&y<470)
     {
     readimagefile("pics\\bmb.jpg",0,0,1350,700);
     click(x,y,9);
     }
     else if(x>90&&x<640&&y>490&&y<680)
     movies();
     else if(x>720&&x<1280&&y>490&&y<680)
     exit1();
     else
     hindi();
}
int check_6(int x,int y)
{
    cout<<"entered check_6";
    if(x>50&&x<540&&y>540&&y<657)
    return 0;
    else if(x>50&&x<540&&y>395&&y<525)
    return 1;
    else
    click(x,y,6);
    //rectangle(50,540,540,675);//back
    //rectangle(50,395,540,525);//next
}
void movies()
{
     cleardevice();
     readimagefile("pics\\m menu.jpg",0,0,1350,700);
     //rectangle(20,30,1320,240);//english
     //rectangle(20,260,1320,470);//hindi
     //rectangle(90,490,640,680);//menu
     //rectangle(720,490,1280,680);//exit
     click(x,y,3);
}
void games()
{
     readimagefile("pics\\games.jpg",0,0,1350,700);
     //rectangle(100,530,890,670);//instructions
     //rectangle(960,530,1260,670);//exit
     //rectangle(100,30,450,490);//s and l
     //rectangle(550,30,890,490);//t t t
     //rectangle(960,30,1260,490);//menu
     click(x,y,1);
}
void credits()
{
     readimagefile("pics\\credits.jpg",0,0,1350,700);
     getch();
     menu();
}
void instructions()
{
     cleardevice();
     readimagefile("pics\\I1.jpg",0,0,1350,700);
     getch();
}
void instructions_g()
{
      readimagefile("pics\\I2.jpg",0,0,1350,700);
      getch();
      readimagefile("pics\\I3.jpg",0,0,1350,700);
      getch();
}
void english()
{
     cleardevice();
     readimagefile("pics\\e menu.jpg",0,0,1350,700);
     click(x,y,4);
}
void hindi()
{
     cleardevice();
     readimagefile("pics\\h menu.jpg",0,0,1350,700);
     click(x,y,5);
}
void seats()
{
     cleardevice();
     readimagefile("pics\\seats.jpg",0,0,1350,700);
     //rectangle(77,104,442,197);//s4
     //rectangle(77,222,442,313);//s1
     //rectangle(488,104,854,197);//s5
     //rectangle(488,222,854,313);//s2
     //rectangle(900,104,1266,197);//s6
     //rectangle(900,222,1266,313);//s3
     //rectangle(77,345,442,438);//g4
     //rectangle(488,345,854,438);//g5
     //rectangle(900,345,1266,438);//g6
     //rectangle(77,463,442,556);//g1
     //rectangle(488,463,854,556);//g2
     //rectangle(900,463,1266,556);//g3
     //rectangle(260,583,621,680);//back
     //rectangle(711,583,1072,680);//next
     int seat=2;
     booked1(name1);
     while(seat!=-1&&seat!=0)
     {
     seat=find_seat();
     if(seat>0)
     abc(seat-1,name1);
     else if(seat==-1)
     {
          next1();
          uploading();
          menu();
     }
     else if(seat==0)
     {
          if(back1()==1)
          english();
          else
          hindi();
     }
     }
}
void kfp(int a2)
{
     name1=0;
     if(a2==0)
     movies();
     else if(a2==1)
     seats();
}
void im3(int a2)
{
     name1=1;
     if(a2==0)
     movies();
     else if(a2==1)
     seats();
}
void i3(int a2)
{
     name1=2;
     if(a2==0)
     movies();
     else if(a2==1)
     seats();
}
void bmb(int a2)
{
     name1=3;
     if(a2==0)
     movies();
     else if(a2==1)
     seats();
}
