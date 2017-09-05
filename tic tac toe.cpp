#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int main()
{
    int count1=0,count2=0;
    char cho;
    do
    {
    int i,ch,play;
    int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,j=9;
    char m[3][3]={{'1','2','3'},
                  {'4','5','6'},
                  {'7','8','9'}};
    system("cls");
    cout<<"player 1 : "<<count1<<"\tplayer 2 : "<<count2<<"\n\n";
    cout<<m[0][0]<<" | "<<m[0][1]<<" | "<<m[0][2]<<"\n";
    cout<<"__________\n";
    cout<<m[1][0]<<" | "<<m[1][1]<<" | "<<m[1][2]<<"\n";
    cout<<"__________\n";
    cout<<m[2][0]<<" | "<<m[2][1]<<" | "<<m[2][2]<<"\n";
    for(i=0;i<9;i++)
    {
                    if(i%2==0)
                    {
                              cout<<"\nplayer 1 enter choice : ";
                              cin>>ch;
                              play=1;
                    }
                    else
                    {
                        cout<<"\nplayer 2 enter choice : ";
                        cin>>ch;
                        play=2;
                    }
                    re:
                    if(ch>0&&ch<10&&(ch==a||ch==b||ch==c||ch==d||ch==e||ch==f||ch==g||ch==h||ch==j))
                    {
                    switch(ch)
                    {
                              case 1:
                                   {
                                        if(play==1)
                                        m[0][0]='X';
                                        else
                                        m[0][0]='O';
                                        a=1234;
                                        break;
                                   }
                              case 2:
                                   {
                                        if(play==1)
                                        m[0][1]='X';
                                        else
                                        m[0][1]='O';
                                        b=1234;
                                        break;
                                   }
                              case 3:
                                   {
                                        if(play==1)
                                        m[0][2]='X';
                                        else
                                        m[0][2]='O';
                                        c=1234;
                                        break;
                                   }
                              case 4:
                                   {
                                        if(play==1)
                                        m[1][0]='X';
                                        else
                                        m[1][0]='O';
                                        d=1234;
                                        break;
                                   }
                              case 5:
                                   {
                                        if(play==1)
                                        m[1][1]='X';
                                        else
                                        m[1][1]='O';
                                        e=1234;
                                        break;
                                   }
                              case 6:
                                   {
                                        if(play==1)
                                        m[1][2]='X';
                                        else
                                        m[1][2]='O';
                                        f=1234;
                                        break;
                                   }
                              case 7:
                                   {
                                        if(play==1)
                                        m[2][0]='X';
                                        else
                                        m[2][0]='O';
                                        g=1234;
                                        break;
                                   }
                              case 8:
                                   {
                                        if(play==1)
                                        m[2][1]='X';
                                        else
                                        m[2][1]='O';
                                        h=1234;
                                        break;
                                   }
                              case 9:
                                   {
                                        if(play==1)
                                        m[2][2]='X';
                                        else
                                        m[2][2]='O';
                                        j=1234;
                                        break;
                                   }
                    }
                    }
                    else
                    {
                        cout<<"wrong choice please re-enter : ";
                        cin>>ch;
                        goto re;
                    }
                    system("cls");
                    cout<<"player 1 : "<<count1<<"\tplayer 2 : "<<count2<<"\n\n";
                    cout<<m[0][0]<<" | "<<m[0][1]<<" | "<<m[0][2]<<"\n";
                    cout<<"__________\n";
                    cout<<m[1][0]<<" | "<<m[1][1]<<" | "<<m[1][2]<<"\n";
                    cout<<"__________\n";
                    cout<<m[2][0]<<" | "<<m[2][1]<<" | "<<m[2][2]<<"\n";
                    if((m[0][0]=='X'&&m[0][1]=='X'&&m[0][2]=='X')||(m[0][0]=='X'&&m[1][1]=='X'&&m[2][2]=='X')||(m[1][0]=='X'&&m[1][1]=='X'&&m[1][2]=='X')||(m[2][0]=='X'&&m[2][1]=='X'&&m[2][2]=='X')||(m[0][0]=='X'&&m[1][0]=='X'&&m[2][0]=='X')||(m[0][1]=='X'&&m[1][1]=='X'&&m[2][1]=='X')||(m[0][2]=='X'&&m[1][2]=='X'&&m[2][2]=='X')||(m[0][2]=='X'&&m[1][1]=='X'&&m[2][0]=='X'))  
                    {
                        MessageBox(NULL, "player 1 wins !!!", "winner", MB_OK);
                        count1++;
                        break;
                    }
                    else if((m[0][0]=='O'&&m[0][1]=='O'&&m[0][2]=='O')||(m[0][0]=='O'&&m[1][1]=='O'&&m[2][2]=='O')||(m[1][0]=='O'&&m[1][1]=='O'&&m[1][2]=='O')||(m[2][0]=='O'&&m[2][1]=='O'&&m[2][2]=='O')||(m[0][0]=='O'&&m[1][0]=='O'&&m[2][0]=='O')||(m[0][1]=='O'&&m[1][1]=='O'&&m[2][1]=='O')||(m[0][2]=='O'&&m[1][2]=='O'&&m[2][2]=='O')||(m[0][2]=='O'&&m[1][1]=='O'&&m[2][0]=='O'))  
                    {
                        MessageBox(NULL, "player 2 wins !!!", "winner", MB_OK);
                        count2++;
                        break;
                    }
                    if(i==8)
                    MessageBox(NULL, "draw !!!", "winner", MB_OK);
                    
    }
    cout<<"\nplay again? (y/n) : ";
    cin>>cho;
    }while(cho=='y');
    getch();
}
