#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>

class Wektor {
  double tab[ROZMIAR];
public:
  Wektor() {for(int i=0;i<ROZMIAR;++i) tab[i]=0;}
  
  const double & operator[] (int ind) const {
    if (ind < 0 || ind > ROZMIAR) {
       std::cerr << "blad: poza zakresem" <<  std::endl;
      exit(1); 
    }
    return tab[ind];
  };
  
  double & operator[] (int ind) {
    if (ind < 0 || ind > ROZMIAR) {
       std::cerr << "blad: poza zakresem" <<  std::endl;
      exit(1);
    }
    return tab[ind];
  };
  
  double dlugosc() const; //OK
  double operator * (const Wektor & W2) const;//OK iloczyn skalarny
  Wektor operator * (double skalar) const; // W * 2 OK
  Wektor  operator + (const Wektor & W2) const;//OK bez & bez const
  Wektor  operator - (const Wektor & W2) const;//OK bez &
};

Wektor operator * (double skalar, const Wektor & W2) ; // 3 * W funkcja poza klasa OK

std::istream& operator >> (std::istream &Strm, Wektor &Wek); /*wczytanie wektora OK*/

std::ostream& operator << (std::ostream &Strm, const Wektor &Wek); /*wyswietlenie wektora OK*/

Wektor iloczyn_wektorowy (Wektor & W1,Wektor & W2);//iloczyn wektorowy jest tylko dla ROZMIAR3

#endif
