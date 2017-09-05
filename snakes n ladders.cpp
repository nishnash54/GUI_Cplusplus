#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<stdio.h>
using namespace std;
void board(int,int);
void dice(int&,int&);
int main()
{
    int pos1=0,pos2=0,flag=1;
    board(pos1,pos2);
    while(pos1!=49||pos2!=49)
    {
                               dice(pos1,flag);
                               getch();
                               board(pos1,pos2);
                               if(pos1==49)
                               {
                                            MessageBox(NULL, "player 1 wins !!!", "winner", MB_OK);
                                            break;
                               }
                               dice(pos2,flag);
                               getch();
                               board(pos1,pos2);
                               if(pos2==49)
                               {
                                    MessageBox(NULL, "player 2 wins !!!", "winner", MB_OK);
                                    break;
                               }
    }
    getch();
}
void dice(int& pos,int& flag)
{
     if(flag==1)
     cout<<"player 1 press enter to roll";
     else
     cout<<"player 2 press enter to roll";
     getch();
     flag*=-1;
     srand(time(NULL) );
     int roll;
     roll=(rand()%6)+1;
     switch(roll)
     {
                 case 1:
                      {
                            cout<<"\nyou rolled 1!\n"
                                <<"____________\n"
                                <<"|          |\n"
                                <<"|    ()    |\n"
                                <<"|          |\n"
                                <<"____________\n";
                            break;
                      }
                 case 2:
                      {
                            cout<<"\nyou rolled 2!\n"
                                <<"____________\n"
                                <<"| ()       |\n"
                                <<"|          |\n"
                                <<"|       () |\n"
                                <<"____________\n";
                            break;
                      }
                 case 3:
                      {
                            cout<<"\nyou rolled 3!\n"
                                <<"____________\n"
                                <<"|    ()    |\n"
                                <<"|    ()    |\n"
                                <<"|    ()    |\n"
                                <<"____________\n";
                            break;
                      }
                 case 4:
                      {
                            cout<<"\nyou rolled 4!\n"
                                <<"____________\n"
                                <<"| ()    () |\n"
                                <<"|          |\n"
                                <<"| ()    () |\n"
                                <<"____________\n";
                            break;
                      }
                 case 5:
                      {
                            cout<<"\nyou rolled 5!\n"
                                <<"____________\n"
                                <<"| ()    () |\n"
                                <<"|    ()    |\n"
                                <<"| ()    () |\n"
                                <<"____________\n";
                            break;
                      }
                 case 6:
                      {
                            cout<<"\nyou rolled 6!\n"
                                <<"____________\n"
                                <<"| ()   ()  |\n"
                                <<"| ()   ()  |\n"
                                <<"| ()   ()  |\n"
                                <<"____________\n";
                            break;
                      }
     }
     pos+=roll;
     if(pos==4)
     {
               pos=40;
               cout<<"climb up the ladder to "<<pos<<"\n";
     }
     else if(pos==7)
     {
               pos=32;
               cout<<"climb up the ladder to "<<pos<<"\n";
     }
     else if(pos==38)
     {
               pos=56;
               cout<<"climb up the ladder to "<<pos<<"\n";
     }
     else if(pos==47)
     {
               pos=71;
               cout<<"climb up the ladder to "<<pos<<"\n";
     }
     else if(pos==55)
     {
               pos=97;
               cout<<"climb up the ladder to "<<pos<<"\n";
     }
     else if(pos==62)
     {
               pos=81;
               cout<<"climb up the ladder to "<<pos<<"\n";
     }
     else if(pos==55)
     {
               pos=97;
               cout<<"climb up the ladder to "<<pos<<"\n";
     }
     if(pos>49)
     {
                int t=pos-49;
                pos=49-t;
     }
     if(pos==17)
     {
               pos=2;
               cout<<"snakeee!! go back to "<<pos<<"\n";
     }
     else if(pos==51)
     {
               pos=27;
               cout<<"snakeee!! go back to "<<pos<<"\n";
     }
     else if(pos==58)
     {
               pos=43;
               cout<<"snakeee!! go back to "<<pos<<"\n";
     }
     else if(pos==85)
     {
               pos=52;
               cout<<"snakeee!! go back to "<<pos<<"\n";
     }
     else if(pos==98)
     {
               pos=63;
               cout<<"snakeee!! go back to "<<pos<<"\n";
     }
     else if(pos==36)
     {
               pos=8;
               cout<<"snakeee!! go back to "<<pos<<"\n";
     }
}
void board(int pos1,int pos2)
{
     system("cls");
     cout<<"_______________________________                   ladders :\n"
         <<"|$$|99|98|97|96|95|94|93|92|91|                   04  -  40\n"
         <<"_______________________________                   07  -  32\n"
         <<"|81|82|83|84|85|86|87|88|89|90|                   38  -  56\n"
         <<"_______________________________                   47  -  71\n"
         <<"|80|79|78|77|76|75|74|73|72|71|                   55  -  97\n"
         <<"_______________________________                   62  -  81\n"
         <<"|61|62|63|64|65|66|67|68|69|70|\n"
         <<"_______________________________                   snakes :\n"
         <<"|60|59|58|57|56|55|54|53|52|51|                   17  -  02\n"
         <<"_______________________________                   36  -  08\n"
         <<"|41|42|43|44|45|46|47|48|49|50|                   51  -  27\n"
         <<"_______________________________                   58  -  43\n"
         <<"|40|39|38|37|36|35|34|33|32|31|                   85  -  52\n"
         <<"_______________________________                   98  -  63\n"
         <<"|21|22|23|24|25|26|27|28|29|30|\n"
         <<"_______________________________\n"
         <<"|20|19|18|17|16|15|14|13|12|11|                   player 1 :- "<<pos1<<"\n"
         <<"_______________________________\n"
         <<"|01|02|03|04|05|06|07|08|09|10|                   player 2 :- "<<pos2<<"\n"
         <<"_______________________________\n";
     }
