#include <iostream>
#include <conio.h>

using namespace std;
class kubus
{
 protected:
       double s;
  public:
       virtual void get_data()=0;
       virtual void display_area()=0;
};

class bujursangkar : public kubus
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Luas Bujursangkar\n\n";
       cout<<"Sisi  = "; cin >>s;
    }
    void display_area(void)
    {
       double luas;
       luas = s * s;
       cout<<"dik : sisi = "<< s;
       cout<<"\ndit : luas bujursangkar";
       cout<<"\npenyelesaian";
       cout<<"\nluas bujursangkar = sisi x sisi";
       cout<<"\n= " <<s <<"x" <<s;
       cout<<"\n= "<<luas;
    }
};

class volume : public kubus
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Volume Kubus\n\n";
       cout<<"Sisi = "; cin>>s;
    }
    void display_area(void)
    {
       double volume;
       volume = s * s * s;
       cout<<"\nVolume Kubus = sisi x sisi x sisi";
       cout<<"\n= " <<s <<"x" <<s <<"x" <<s;
       cout<<"\n= "<<volume;
    }
};

class kub1 : public kubus
{
   public:
    void get_data(void)
    {
       cout<<"\n\nMenghitung Bangun Ruang Kubus\n\n";
       cout<<"Sisi   = "; cin>>s;
    }
    void display_area(void)
    {
       double luas;
       double volume;
       luas = s * s;
       volume = s * s * s;
       cout<<"\nluas bujursangkar = sisi x sisi";
       cout<<"\n= " <<s <<"x" <<s;
       cout<<"\n= "<<luas;
       cout<<"\nVolume Kubus = sisi x sisi x sisi";
       cout<<"\n= " <<s <<"x" <<s <<"x" <<s;
       cout<<"\n= "<<volume;
      
    }
};



int main()
{
system("cls");
bujursangkar sangkar;
volume vol;
kub1 bus;



kubus *list[3];

list[0]=&sangkar;
list[1]=&vol;
list[2]=&bus;


int pilih;
while(1)
{
system("cls");
  cout<<"\nMenghitung Bangun Ruang\n";
  cout<<"1) Luas Bujursangkar\n";
  cout<<"2) Volume Kubus\n";
  cout<<"3) Luas Bujursangkar & Volume Kubus\n";
  cout<<"Masukkan Pilihan:-";
  cin>>pilih;
  
  if(pilih==1){
          list[0]->get_data();
          list[0]->display_area();
          getch();
          }
  else if (pilih==2){
          list[1]->get_data();
          list[1]->display_area();
          getch();
          }
  else if (pilih==3){
          list[2]->get_data();
          list[2]->display_area();
          getch();
          
          }
 else
     exit(1);
}}
