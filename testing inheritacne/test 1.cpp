#include<iostream>
#include<conio.h>
using namespace std;
class eng
{
      public:
             void lan()
             {
                  cout<<"english";
             }
};
class hin
{
      public:
             void lan()
             {
                  cout<<"hindi";
             }
};
class im3 : public eng
{
      int r;
      public:
             im3(){r=0;}
             void imm()
             {
                  void lan();
                  cout<<"iron man 3";
             }
             int imb()
             {
                 return r;
             }
             void imsel()
             {
                  r=1;
             }
}a[12];
class kfp : public eng
{
      int e;
      public:
             kfp(){e=0;}
             void kpm()
             {
                  cout<<"kung fu panda";
             }
             int kpb()
             {
                 return e;
             }
             void kpsel()
             {
                  e=1;
             }
}b;
class i3 : public hin
{
      int w;
      public:
             i3(){w=0;}
             void im()
             {
                  cout<<"3 idiots";
             }
             int ib()
             {
                 return w;
             }
             void isel()
             {
                  w=1;
             }
}c;
class bmb : public hin
{
      int q;
      public:
             bmb(){q=0;}
             void bbm()
             {
                  cout<<"bhaag milkha bhaag";
             }
             int bbb()
             {
                 return q;
             }
             void bbsel()
             {
                  q=1;
             }
}d;
int main()
{
    int i;
    float ph_num;
    int ch;
    while(1)
    {
    cout<<"\nmovie"
        <<"\n1.im3"
        <<"\n2.kfp"
        <<"\n3.3i"
        <<"\n4.bmb"
        <<"\n5.exit"
        <<"\nenter choice : ";
    cin>>ch;
    switch(ch)
    {
              case 1:
                   {
                        set:
                        cout<<"enter seat number : ";
                        cin>>i;
                        if(i-1>=0&&i<12)
                        {
                            cout<<"booked : ";
                            a[i].imsel();
                            a[i].imm();
                            if(a[i].imb()==1)
                            cout<<"\nno seat available";
                            else 
                            {
                                 if(i>6)
                                 cout<<"\nrs 500";
                                 else 
                                 cout<<"\nrs 350";
                            }
                        }
                        else 
                        goto set;
                        break;
                   }
              case 4:
                   {
                        if(d.bbb()==1)
                        {
                                      cout<<"no seats available";
                                      cout<<"\nenter phone number : ";
                                      cin>>ph_num;
                                      cout<<"\nyou will be informed soon !!";
                        }
                        else
                        {
                            cout<<"booked : ";
                            d.bbsel();
                            d.bbm();
                        }
                        break;
                   }
              case 5:
                   exit(0);
    }
    }    
    getch();
}
