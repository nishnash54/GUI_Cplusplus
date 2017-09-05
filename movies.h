#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int name;
struct seatpic
{
       int z1,z2,z3,z4;
}seat_pic[12]={{77,222,442,313},
             {488,222,854,313},
             {900,222,1266,313},
             {77,104,442,197},
             {488,104,854,197},
             {900,104,1266,197},
             {77,463,442,556},
             {488,463,854,556},
             {900,463,1266,556},
             {77,345,442,438},
             {488,345,854,438},
             {900,345,1266,438},
             };
class movie
{
      int s[12];
      public:
             int avail(int s_num)
             {
                 if(s[s_num]==0)
                 {
                 s[s_num]=2;
                 readimagefile("pics\\tick.jpg",seat_pic[s_num].z1,seat_pic[s_num].z2,seat_pic[s_num].z3,seat_pic[s_num].z4);
                 }
                 else if(s[s_num]==2)
                 {
                      s[s_num]=0;
                      cleardevice();
                      readimagefile("pics\\seats.jpg",0,0,1350,700);
                      booked();
                      for(int l=0;l<12;l++)
                 {
                         if(s[l]==2)
                         readimagefile("pics\\tick.jpg",seat_pic[l].z1,seat_pic[l].z2,seat_pic[l].z3,seat_pic[l].z4);
                 }
                 }
             }
             void back()
             {
                 for(int l=0;l<12;l++)
                 {
                         if(s[l]==2)
                         s[l]=0;
                 }
             }
             void next()
             {
                 for(int l=0;l<12;l++)
                 {
                         if(s[l]==2)
                         s[l]=1;
                 }
             }
             void booked()
             {
                  for(int l=0;l<12;l++)
                 {
                         if(s[l]==1)
                         readimagefile("pics\\block.jpg",seat_pic[l].z1,seat_pic[l].z2,seat_pic[l].z3,seat_pic[l].z4);
                 }
             }
             void print()
             {
                  for(int l=0;l<12;l++)
                  cout<<s[l]<<" ";
             }
             void reset()
             {
                  for(int l=0;l<12;l++)
                  s[l]=0;
             }
}m[4];
void booked1(int n)
{
     name=n;
     m[name].booked();
}
void abc(int a1,int n)
{
     name=n;
    m[name].avail(a1);
}
void read()
{
     ifstream fin("file.dat",ios::binary|ios::in);
     for(int l=0;l<4;l++)
     fin.read((char*)&m[l],sizeof(m[l]));
     fin.close();
}
void next1()
{
     m[name].next();
     remove("file.dat");
     ofstream fout("file.dat",ios::binary|ios::out);
     for(int l=0;l<4;l++)
     fout.write((char*)&m[l],sizeof(m[l]));
     fout.close();
}
int back1()
{
    m[name].back();
    if(name==0||name==1)
    return 1;
    else
    return 2;
}
void reset1()
{
     for(int p=0;p<4;p++)
     m[p].reset();
}
void exit1()
{
     name=0;
     next1();
     delay(500);
     exit(0);
}
void password()
{
     int g,h;
    char c=' ';
    char pass[20];
    cleardevice();
    readimagefile("pics\\password.jpg",0,0,1350,700);
    setcolor(WHITE);
    settextstyle(8,0,10);
    for(g=0;g<10;g++)
    {
                     c=getch();
                     if(c==8&&g<0)
                     g=-1;
                     else if(c==8)
                     g-=2;
                     else if(c==13)
                     {
                          pass[g]='\0';
                          break;
                     }
                     else
                     pass[g]=c;
                     cleardevice();
                     readimagefile("pics\\password.jpg",0,0,1350,700);
                     for(h=0;h<g+1;h++)
                     outtextxy(200+100*h,198,"*");
                     if(g<0)
                     g=-1;
    }
    settextstyle(3,0,6);
    if (strcmp(pass,"alpha")==0) 
    {
    outtextxy(380,400,"PASSWORD ACCEPTED");
    reset1();
    delay(3000);
    outtextxy(350,400,"SEATS HAVE BEEN RESET");
    }
    else 
    outtextxy(380,400,"WRONG PASSWORD");
    delay(3000);
}    
int find_seat()
{
    int l,m;
    int flag=1;
    while(flag)
    if(ismouseclick(WM_LBUTTONDOWN))
    {
                                     getmouseclick(WM_LBUTTONDOWN,l,m);
                                     flag=0;
                                     
    }
    clearmouseclick(WM_LBUTTONDOWN);
    if(l>77&&l<442&&m>222&&m<313)
    return 1;
    else if(l>488&&l<854&&m>222&&m<313)
    return 2;
    else if(l>900&&l<1266&&m>222&&m<313)
    return 3;
    else if(l>77&&l<442&&m>104&&m<197)
    return 4;
    else if(l>488&&l<854&&m>104&&m<197)
    return 5;
    else if(l>900&&l<1266&&m>104&&m<197)
    return 6;
    else if(l>77&&l<442&&m>463&&m<556)
    return 7;
    else if(l>488&&l<854&&m>463&&m<556)
    return 8;
    else if(l>900&&l<1266&&m>463&&m<556)
    return 9;
    else if(l>77&&l<442&&m>345&&m<438)
    return 10;
    else if(l>488&&l<854&&m>345&&m<438)
    return 11;
    else if(l>900&&l<1266&&m>345&&m<438)
    return 12;
    else if(l>260&&l<620&&m>583&&m<680)
    return 0;
    else if(l>711&&l<1070&&m>583&&m<680)
    return (-1);
    else
    return (-2);
}
