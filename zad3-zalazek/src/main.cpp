#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"

using namespace std;

int main()
{
  Wektor W,blad;
  UkladRownanLiniowych U;
  cout << endl << " Start programu " << endl << endl;
  cin>>U;
  cout<<U;
  cout<<endl<<"Rozwiazanie x = ( ";
  for(int i=0;i<ROZMIAR;++i)
    cout<<"x"<<i<<", ";
  cout<<")"<<endl;
  cout<< U.Oblicz()<<endl;
  blad=( U.wez_macierz() * U.Oblicz() -U.wez_wektor() );
  cout<<"Wektor bledu:   Ax-B  = ( "<<blad<<")"<<endl;
  cout<<"Dlugosc wektora bledu: ||Ax-B|| = "<<blad.dlugosc()<<endl;
}

