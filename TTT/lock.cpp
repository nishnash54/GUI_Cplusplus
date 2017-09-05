#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    int i,j;
    char c=' ';
    char pass[20];
    cout<<"ENTER PASSWORD : ";
    for(i=0;i<20;i++)
    {
                     c=getch();
                     if(c==8&&i<0)
                     i=-1;
                     else if(c==8)
                     i-=2;
                     else if(c==13)
                     {
                          pass[i]='\0';
                          break;
                     }
                     else
                     pass[i]=c;
                     system("cls");
                     cout<<"Enter password : ";
                     for(j=0;j<i+1;j++)
                     cout<<"*";
                     if(i<0)
                     i=-1;
    }
    if (strcmp(pass,"alpha")==0) 
    cout<<"\nPASSWORD ACCEPTED\nSEATS RESET";
    else 
    cout<<"\nWRONG PASSWORD";
    getch();
}
