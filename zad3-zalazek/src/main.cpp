#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"

using namespace std;

int main()
{
  cout << endl << " Start programu " << endl << endl;
  Wektor W,W4;
  double a=2;
  Macierz M1,M2;
  W[0] = 1;
  W[1] = 3;
  W[2] = 2;
  cout << W;
  
  cout << "wpisz wartosci" << endl;
  cin >> W4;
  cout << endl;
  cout << W4;
  cout << "dlugosc: " << W4.dlugosc() << endl;
  
  cout << "iloczyn skalarny: " << W * W4 << endl;
  cout<<"mnozenie wektora przez liczbe "<<a<<" :"<<W4*a<<endl;
  cout<<"mnozenie liczby "<<a<<" przez wektor :"<<a*W4<<endl;
  cout<<"dodanie wektorow "<<W+W4<<endl;
  cout<<"odejmowanie wektorow "<<W-W4<<endl;
  cout<<"iloczyn wektorowy ale3X3 "<<iloczyn_wektorowy(W,W4)<<endl;
  
  M1[0][1]=4;
  M1[1][1]=1;
  M1[2][1]=2;
  cout<<M1;
  cin>>M2;
  cout<<M2;
  cout<<"dodawanie macierzy"<<endl;
  cout<<M1+M2<<endl;
  cout<<"odejmowanie macierzy"<<endl;
  cout<<M1-M2<<endl;
  cout<<"transpozycja macierzy"<<endl;
  cout<<M2.transpozycja()<<endl;
  cout<<"mnozenie macierzy przez wektor"<<endl;
  cout<<M2*W4<<endl;
   cout<<"mnozenie macierzy"<<endl;
   cout<<M1*M2<<endl;
  cout<<"wyznacznik zle "<<M1.Wyznacznik()<<endl;
}

